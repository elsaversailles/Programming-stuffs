#define d digitalWrite 
#define p pinMode

int g = 2;
int y = 3;
int r = 4;
int rr = 5;
int gg = 6;
int DELAY_g = 5000;
int DELAY_y = 2000;
int DELAY_r = 5000;
int DELAY_rr = 5000;
int DELAY_gg = 5000;
void setup()
{
  p(GREEN, OUTPUT);
  p(YELLOW, OUTPUT);
  p(RED, OUTPUT);
  p(REDS, OUTPUT);
  p(GREENS, OUTPUT);
}

void loop()
{
  g_light();
  delay(DELAY_GREEN);
  y_light();
  delay(DELAY_YELLOW);
  r_light();
  delay(DELAY_RED);
  rr_light();
  delay(DELAY_REDS);
  gg_light();
  delay(DELAY_GREENS);
  
}

void g_light()
{
  d(GREEN, HIGH);
  d(YELLOW, LOW);
  d(RED, LOW);
  d(REDS, LOW);
  d(GREENS, LOW);
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
