int theInfraredSensor = 3;
int LED = 13;

void setup() {
  Serial.begin(9600);
  Serial.println("The serial is Working");
  pinMode(theInfraredSensor, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int SensorStatus = digitalRead(theInfraredSensor);
  Serial.println(SensorStatus);

  if (SensorStatus == 1) {
    digitalWrite(LED, LOW);
    Serial.println("The Motion Detected");
  }

  if (SensorStatus == 0) {
    digitalWrite(LED, HIGH);
    Serial.println("The Motion Ended");
  }
}