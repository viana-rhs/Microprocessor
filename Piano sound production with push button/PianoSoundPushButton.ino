#include <Wire.h>

#define SLAVE_LED_PIN 13 
String receivedCommand = "";
String commandToMaster = "off";

void setup() {
  Wire.begin(8);
  pinMode(SLAVE_LED_PIN, OUTPUT); 
  Wire.onReceive(receiveEvent); 
  Wire.onRequest(requestEvent); 
  Serial.begin(9600);
  Serial.println("Slave ready...");
}

void loop() {
  
  if (Serial.available()) {
    commandToMaster = Serial.readStringUntil('\n'); 
    commandToMaster.trim();
    Serial.print("Command set for Master: ");
    Serial.println(commandToMaster);
  }


  if (receivedCommand == "on") {
    digitalWrite(SLAVE_LED_PIN, HIGH); 
    Serial.println("Slave LED ON");
  } else if (receivedCommand == "off") {
    digitalWrite(SLAVE_LED_PIN, LOW); 
    Serial.println("Slave LED OFF");
  }

  delay(100); 
}

void receiveEvent(int bytes) {
  
  receivedCommand = "";
  while (Wire.available()) {
    char c = Wire.read(); 
    receivedCommand += c;
  }
  receivedCommand.trim(); 
}

void requestEvent() {
  
  Wire.write(commandToMaster.c_str());
}