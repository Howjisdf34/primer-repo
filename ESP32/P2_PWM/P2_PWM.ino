const int ledPin = 23;
int brillo = 0;     
const int frecuencia = 1000; 
const int canal = 0;       
const int resolucion = 10;  

void setup() {
  // 1. Configuramos el canal con la frecuencia y resolución
  ledcSetup(canal, frecuencia, resolucion);
  
  // 2. Conectamos el canal al pin físico
  ledcAttachPin(ledPin, canal);
}

void loop() {
  brillo = 0;
  // 3. Cambiamos el brillo (como es 8 bits, el máximo es 255)
  ledcWrite(canal, 127);
  delay(1000);
  ledcWrite(canal, 0);
  delay(1000); // Brillo a la mitad

  for(brillo = 0;brillo<=1025;brillo++){
    ledcWrite(canal, brillo);
    delay(5);
  }

  for(brillo = 1025;brillo>=0;brillo--){
    ledcWrite(canal, brillo);
    delay(5);
  }

  ledcWrite(canal, 0);
  delay(1000);

}
