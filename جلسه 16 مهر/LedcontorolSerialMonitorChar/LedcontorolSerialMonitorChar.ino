const int ledpin=12;
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
if(Serial.available()> 0){
  char value = Serial.read();
  if(value == 'H'){
     digitalWrite(ledpin,HIGH);
    }else if(value == 'L'){
           digitalWrite(ledpin,LOW);
    };
  
  };

}
