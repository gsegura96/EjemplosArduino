#define pinSalida 13 //definimos una constante con el pin que vamos a utilizar

void setup() {//Esta funcion solo se ejecuta una vez
  //Aca llamamos las funciones de configuracion (modo de pines, inicializar el puerto serial, etc...)
  pinMode(pinSalida, OUTPUT); //inicializamos el pin como una salida
}

void loop() {// Esta fucion se repite infinitamente
  digitalWrite(pinSalida, HIGH);   //pone 5V en el pin (enciende el LED)
  delay(1000);                     //espera 1000 milisegundos
  digitalWrite(pinSalida, LOW);    //pone 0V en el pin (apaga el LED)
  delay(1000);
}
