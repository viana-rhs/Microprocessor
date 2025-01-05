#include <Wire.h>

#define SLAVE_ADDRESS 8 
#define MASTER_LED_PIN 13 
String receivedCommand = ""; /
String inputCommand = ""; 

void setup() {
  Wire.begin(); 
  pinMode(MASTER_LED_PIN, OUTPUT); 
  Serial.begin(9600);
  Serial.println("Master ready...");
}

void loop() {
  
  if (Serial.available()) {
    inputCommand = Serial.readStringUntil('\n'); 
    inputCommand.trim();
    Wire.beginTransmission(SLAVE_ADDRESS); 
    Wire.write(inputCommand.c_str()); 
    Wire.endTransmission();
    Serial.print("Command sent to Slave: ");
    Serial.println(inputCommand);
  }


  Wire.requestFrom(SLAVE_ADDRESS, 10); 
  if (Wire.available()) {
    receivedCommand = "";
    while (Wire.available()) {
      char c = Wire.read(); 
      receivedCommand += c;
    }
    receivedCommand.trim(); 

 
    if (receivedCommand == "on") {
      digitalWrite(MASTER_LED_PIN, HIGH);
      Serial.println("Master LED ON (command from Slave)");
    } else if (receivedCommand == "off") {
      digitalWrite(MASTER_LED_PIN, LOW);
      Serial.println("Master LED OFF (command from Slave)");
    }
  }

  delay(100); 
}