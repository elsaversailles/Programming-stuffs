// variables
int GREEN = 2;
int YELLOW = 3;
int RED = 4;
int REDS = 5;
int GREENS = 6;
int DELAY_GREEN = 5000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 5000;
int DELAY_REDS = 5000;
int DELAY_GREENS = 5000;

// basic functions
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(REDS, OUTPUT);
  pinMode(GREENS, OUTPUT);
}

void loop()
{
  green_light();
  delay(DELAY_GREEN);
  yellow_light();
  delay(DELAY_YELLOW);
  red_light();
  delay(DELAY_RED);
  reds_light();
  delay(DELAY_REDS);
  greens_light()
  delay(DELAY_GREENS);
  
}

void green_light()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(REDS, LOW);
  digitalWrite(GREENS, LOW);
}

void yellow_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
  digitalWrite(REDS, LOW);
  digitalWrite(GREENS, LOW);
}

void red_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  digitalWrite(REDS, LOW);
  digitalWrite(GREENS, LOW);
}

void reds_light()
{
	digitalWrite(GREEN, LOW);
	digitalWrite(YELLOW, LOW);
	digitalWrite(RED, LOW);
	digitalWrite(REDS, HIGH);
	digitalWrite(GREENS, LOW);
}

void greens_light()
{
	digitalWrite(GREEN, LOW);
	digitalWrite(YELLOW, LOW);
	digitalWrite(RED, LOW);
	digitalWrite(REDS, LOW);
	digitalWrite(GREENS, HIGH);
}
