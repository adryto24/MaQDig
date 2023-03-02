//Encender led al presionar un botón
#define p_led 33
#define p_boton 34

void setup() {
//Definir los pines de led y el boton como salida y entrada respectivamente
pinMode(p_led, OUTPUT);
pinMode(p_boton, INPUT);   
Serial.begin(115200);

}

void loop() {
//Definir la señal del botón como variable booleana 
  bool b_status = digitalRead(p_boton);
  Serial.println(b_status);
//Ciclo que enciende un led en un estado alto(botón oprimido)
  if (b_status){
    digitalWrite(p_led,HIGH);
  }
//Botón apagado en un estado bajo(botón sin oprimir)
  else{
    digitalWrite(p_led,LOW);
  }
  delay(100);
}
