int ledPin = 9;
int potPin = A0;
int potvalue = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potvalue = analogRead(potPin);
  int ledBrightness = map(potvalue, 0, 1023, 0, 255);
  analogWrite(ledPin, ledBrightness);
  delay(10);
}