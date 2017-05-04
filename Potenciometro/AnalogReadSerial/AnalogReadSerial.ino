#define pinAnalogico = A0;  // Pin al que se conecta el potenciometro
int lectura = 0;
void setup() {
  //inicializa la comunicacion serial
  Serial.begin(9600); //9600 es la "velocidad", el mismo valor debe ser seleccionado en el monitor serial
}

void loop() {
  lectura = analogRead(pinAnalogico); //leer el valor en el pin
  Serial.print("sensor = ");
  Serial.println(lectura); // imprime el valor del sensor
  delay(10); //espera para la siguiente lectura
}
