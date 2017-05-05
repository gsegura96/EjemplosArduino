int contador = 0;

void setup(){
// Open serial connection.
Serial.begin(9600);
}
 
void loop(){
String datoOut = "CTR%"+ String(contador);
Serial.println(datoOut);
delay(10); // ms
contador++;
}
