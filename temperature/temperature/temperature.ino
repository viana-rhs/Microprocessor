#define sensorPin A0
float temperature;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue=analogRead(sensorPin);
  temperature = sensorValue * 0.48818225;
  Serial.print("Temp = ");
  Serial.print(temperature);
   Serial.println(" C");

   delay(1000);

}
