int pinLed = 23;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinLed, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pinLed, HIGH);  
  delay(1000);                      
  digitalWrite(pinLed, LOW);   
  delay(1000); 
  digitalWrite(pinLed, HIGH);  
  delay(500);                      
  digitalWrite(pinLed, LOW);   
  delay(500);

}
