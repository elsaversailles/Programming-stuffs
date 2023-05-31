int IRpin1 = 2;
int IRpin2 = 3;
int motor1 = 4;
int motor2 = 5;
int wash1 = 6;
int wash2 = 7;

bool cupdetected1 = false;
bool cupremoved1 = true;
bool ready1 = true;
bool done1 = false;
bool cleaning1InProgress = false;
unsigned long cleaning1StartTime;

bool cupdetected2 = false;
bool cupremoved2 = true;
bool ready2 = true;
bool done2 = false;
bool cleaning2InProgress = false;
unsigned long cleaning2StartTime;

unsigned long dispenseStartTime = 0;
const unsigned long dispenseDuration = 2000; // Duration for dispensing in milliseconds

void setup() {
  Serial.begin(9600);
  pinMode(IRpin1, INPUT);
  pinMode(IRpin2, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(wash1, OUTPUT);
  pinMode(wash2, OUTPUT);
}

void startup() {
  Serial.println("...Scanning...");
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  digitalWrite(wash1, HIGH);
  digitalWrite(wash2, HIGH);
  delay(1000);
}

void dispense1() {
  digitalWrite(motor1, LOW);
  digitalWrite(wash1, HIGH);
  Serial.println("Dispensing 1");
  done1 = true;
}

void dispense2() {
  digitalWrite(motor2, LOW);
  digitalWrite(wash2, HIGH);
  Serial.println("Dispensing 2");
  done2 = true;
}

void cleaning1() {
  if (!cleaning1InProgress) {
    cleaning1StartTime = millis();
    cleaning1InProgress = true;
    digitalWrite(motor1, HIGH);
    digitalWrite(wash1, LOW);
    Serial.println("Cleaning 1");
  } else if (millis() - cleaning1StartTime >= 3000) {
    digitalWrite(wash1, HIGH);
    ready1 = true;
    done1 = false;
    cleaning1InProgress = false;
  }
}

void cleaning2() {
  if (!cleaning2InProgress) {
    cleaning2StartTime = millis();
    cleaning2InProgress = true;
    digitalWrite(motor2, HIGH);
    digitalWrite(wash2, LOW);
    Serial.println("Cleaning 2");
  } else if (millis() - cleaning2StartTime >= 3000) {
    digitalWrite(wash2, HIGH);
    ready2 = true;
    done2 = false;
    cleaning2InProgress = false;
  }
}

void loop() {
  int val1 = digitalRead(IRpin1);
  int val2 = digitalRead(IRpin2);

  while (val1 == HIGH && val2 == HIGH && ready1) {
    startup();
    break;
  }

  if (val1 == LOW && ready1 && !cupdetected1) {
    cupdetected1 = true;
    cupremoved1 = false;
    ready1 = false;
    Serial.println("Station: 1 Activated");
    dispenseStartTime = millis();
    dispense1();
  }

  if (val2 == LOW && ready2 && !cupdetected2) {
    cupdetected2 = true;
    cupremoved2 = false;
    ready2 = false;
    Serial.println("Station: 2 Activated");
    dispenseStartTime = millis();
    dispense2();
  }

  unsigned long currentMillis = millis();

  if (cupdetected1 && currentMillis - dispenseStartTime >= dispenseDuration && val1 == HIGH) {
    cleaning1();
    cupdetected1 = false;
  }

  if (cupdetected2 && currentMillis - dispenseStartTime >= dispenseDuration && val2 == HIGH) {
    cleaning2();
    cupdetected2 = false;
  }

  if (currentMillis - dispenseStartTime >= dispenseDuration) {
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, HIGH);
    done1 = false;
    done2 = false;
  }
}
