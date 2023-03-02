//Plotear la señal resultante al oscurecer e iluminar un LDR
#define p_led 33
#define p_LDR 35
#define THLDR 400

void setup() {
  pinMode(p_led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
//Definir la variable que recibe la señal del fotorresistor    
int ldr = analogRead(p_LDR);
//Ciclo en el que el led enciende si la señal del LDR es mayo a un umbral
if (ldr > THLDR) {
digitalWrite(p_led, LOW);
}
else{
digitalWrite(p_led,HIGH);
}
Serial.println(ldr);
delay(100);  

}
