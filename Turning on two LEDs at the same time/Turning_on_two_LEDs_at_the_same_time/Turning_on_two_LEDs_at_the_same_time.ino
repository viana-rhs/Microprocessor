int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(3000);
}