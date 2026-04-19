/*Entender digitalRead(), digitalWrite() 
Pratica: Botão que liga o LED e Botão liga/desliga o LED
*/

int LED = 9;
int b1 = 3;

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
  if(estadob1 == HIGH){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(10);
  }
}

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(b1, INPUT);
}

void loop(){
  estadob1 = digitalRead(b1);
  //botaoLigaLED();
  botaoLigaDesligaLED();
  
}
