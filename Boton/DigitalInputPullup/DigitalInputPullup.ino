int boton = 12; //evitar usar pines 0 y 1
void setup() {
  //inicializa la comunicacion serial
  Serial.begin(9600); //9600 es la "velocidad", el mismo valor debe ser seleccionado en el monitor serial
  pinMode(pushButton, INPUT_PULLUP);//declaramos el pin como una entrada digital (HIGH o LOW, 0 o 5V), con resistencia Pullup
}

void loop() {
  int estado = digitalRead(boton); //lee el estado del pin (0 o 1, 0 o 5v)
  Serial.println(estado);//imprime el estado del pin
  delay(10);        // espera para la siguiente lectura
}
