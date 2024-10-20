int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
delay(2000);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(5000);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
}