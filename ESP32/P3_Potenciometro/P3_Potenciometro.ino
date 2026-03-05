// Declaramos la intensidad del brillo
int brillo = 0;
// Pin de entrada del potenciometro
int pinPot=34;
// Pin de salida al led
int pinLed=2;
//Características del PWM
const int frecuencia = 5000;
const int canal = 0;
const int resolucion = 8;
void setup()
{
  Serial.begin(9600);
  //Inicializamos las características del pwm
  ledcSetup(canal, frecuencia, resolucion);
  // Definimos que el pin 2 sacara el voltaje
  ledcAttachPin(pinLed, OUTPUT);
  delay(1000);
}
void loop()
{
  //Obtenemos la señal del potenciometro
  brillo = analogRead(pinPot);
  //Mostramos la señal del potenciometro
  Serial.println(brillo);
  //desde 0 a 4095
  //Dividimos la señal en entre 16
  brillo = (brillo / 16.2);
  Serial.println(brillo);
  //Encendemos el led
  ledcWrite(pinLed, brillo);
  //analogWrite(pinLed, BRILLO);
  delay(15);
}
