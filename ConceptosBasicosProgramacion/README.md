# Conceptos basicos

### #include
Se utiliza para incluir librerias o archivos externos.
```c++
#include <LiquidCrystal.h>
```
### #define
Permite definir un alias a un valor, similar a una variable global.
```c++
#define ledPin 3
```
### void setup()
Ciclo que se ejecuta una unica vez, nos permite configurar parametros de las librerias y pines.
```c++
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
```
### void loop()
Ciclo que se ejecuta infinitamente hasta que se apague o reinicie el Arduino (igual a un While true )
```c++
void loop(){
  Serial.println("hola mundo");
  delay(1000);                       
}
```
### delay()
"Congela" el microcontrolador por un tiempo definido en milisegundos.
```c++
delay(1000);   //espera un segundo                    
```
### millis()
Nos permite saber el tiempo que ha pasado desde que inicio el programa
```c++
  unsigned long time;
  time = millis();
  Serial.println(time);
  delay(1000);
}
```
### map()
Funcion para convertir valores en rangos distintos.
```c++
  int val = analogRead(0);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(9, val);
```
