/*Entender digitalRead(), digitalWrite() 
Pratica: Botão que liga o LED e Botão liga/desliga o LED
*/

int LED = 3;
int b1 = 2;

int estadob1 = 0;

void botaoLigaLED(){

  if (estadob1 == HIGH){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(1000);
}

void botaoLigaDesligaLED(){
  estadob1 = digitalRead(b1);
  if(estadob1 == HIGH){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(10);
}

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(b1, INPUT);
}

void loop(){
  //botaoLigaLED();
  botaoLigaDesligaLED();
  
}
