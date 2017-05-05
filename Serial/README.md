# Serial

### Conexión:
Se debe conectar el Arduino a la computadora mediante un cable USB y con el IDE reconocer cual puerto le fue asignado (COM_ en Windows o /dev/tty_ en Linux).



## Arduino
```c++
int contador = 0;
void setup(){
  Serial.begin(9600);
}

void loop(){
  String datoOut = "CTR%"+ String(contador);
  Serial.println(datoOut);
  delay(10);
  contador++;
}
```

## Python
### Lectura simple
Nos permite leer exactamente lo que envia el Arduino, pero contiene varios caracteres "basura"
```python
import serial
import time
ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=0)

while 1:
 try:
  print (ser.readline())
  time.sleep(1)
 except ser.SerialTimeoutException:
  print('Data could not be read')
  time.sleep(1)
  ```

### Separación por comandos
Una manera sencilla para facilitar la lectura de datos es definir una estuctura de comandos conocidos por ambos programas y asi poder parsear los substrings que componen cada lectura serial.
```python
import serial
import time
ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=0)

def leerArduino():
    while 1:
        try:
            entrada = str(ser.readline());
            datos = entrada[entrada.index("'")+1: entrada.index("\\")]
            print(entrada)
            return datos

        except:
            print('Data could not be read')
            time.sleep(1)
while 1:
    datos = leerArduino()
    if(datos.find("%") != -1):
        comando = datos[:datos.index("%")]
        valor = datos[datos.index("%")+1:]
        print("comando: ",comando, "  valor: ", valor)
    time.sleep(1)

```
