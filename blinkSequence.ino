  int redLED = 12;
  int greenLED = 10;
  int blueLED = 8;

  int fastBlink = 250;
  int slowBlink = 600;

  int longWait = 1500;

void setup() {
  // put your setup code here, to run once:



  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  //red LED
  digitalWrite(redLED, HIGH);
  delay(fastBlink);
  digitalWrite(redLED, LOW);
  delay(fastBlink);
  digitalWrite(redLED, HIGH);
  delay(fastBlink);
  digitalWrite(redLED, LOW);
  delay(fastBlink);
  digitalWrite(redLED, HIGH);
  delay(fastBlink);
  digitalWrite(redLED, LOW);
  delay(fastBlink);
  digitalWrite(redLED, HIGH);
  delay(fastBlink);
  digitalWrite(redLED, LOW);
  delay(fastBlink);
  digitalWrite(redLED, HIGH);
  delay(fastBlink);
  digitalWrite(redLED, LOW);
  delay(fastBlink);

  //green LED

  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);
  digitalWrite(greenLED, HIGH);
  delay(slowBlink);
  digitalWrite(greenLED, LOW);
  delay(slowBlink);

  //blue LED

  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);
  digitalWrite(blueLED, HIGH);
  delay(fastBlink);
  digitalWrite(blueLED, LOW);
  delay(fastBlink);

  delay(longWait);
}
