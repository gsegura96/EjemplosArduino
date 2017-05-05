import serial
import time
ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=0)

def leerArduino():
    while 1:
        try:
            entrada = str(ser.readline());
            datos = entrada[entrada.index("'")+1: entrada.index("\\")]
            print(entrada)
            #print(datos)
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
