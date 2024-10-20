int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
delay(3000);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
}