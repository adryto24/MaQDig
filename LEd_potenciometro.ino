//Modular intensidad de led con potenciometro
#define p_led 33
#define p_potenciometro 32


void setup() {
  //Definir el pin del led
  pinMode(p_led, OUTPUT);
  Serial.begin(9600); 

}

void loop() {
//definir la variable que recibe la señal del potenciometro
  long valor = analogRead(p_potenciometro);
  //imprimir en el monitor serial los valores del potenciometro
  Serial.print("El valor es = ");
  Serial.println(valor);
//Ciclo de intensidades para el led dependiente del valor recibido
  if(valor >= 0 && valor <=1024){
    analogWrite(p_led,0);
    delay(1000);
  }
  if(valor >= 1024 && valor <= 2048){
    analogWrite(p_led,50);
    delay(1000);
  }
  if(valor >= 2048 && valor <= 3072){
    analogWrite(p_led,150);
    delay(1000);
  }
  if(valor >=3072 && valor <= 4000){
    analogWrite(p_led,250);
    delay(1000);
  }
}
