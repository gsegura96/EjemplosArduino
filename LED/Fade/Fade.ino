#define pinSalida  11 // pin PWM (puede ser 3, 5, 6, 9, 10 o 11)

void setup() {
  pinMode(pinSalida, OUTPUT); //declaramos el pin como una salida
}

void loop() {
  //analogWrite(pinSalida, brillo) define el brillo del LED
  // el brillo debe ser un valor entre 0 y 255
  analogWrite(pinSalida, 50)
  delay(500);
  analogWrite(pinSalida, 150)
  delay(500);
  analogWrite(pinSalida, 250)
  delay(500);
  for (int brillo = 0; brillo < 256; brillo++) { //ciclo que va incrementando el brillo
    analogWrite(pinSalida, brillo)
    delay(5);
  }
}
