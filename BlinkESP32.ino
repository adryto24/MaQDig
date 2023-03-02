#define Pin_led 33  //Definir variable para el LED

void setup() {
  pinMode(Pin_led, OUTPUT); //Inicializar el led como salida
}


void loop() {
  digitalWrite(Pin_led, HIGH);  
  delay(1000);                     
  digitalWrite(Pin_led, LOW);   
  delay(1000);                    
}
