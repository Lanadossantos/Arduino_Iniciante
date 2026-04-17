/*Entender digitalRead(), digitalWrite() 
Pratica: Botão que liga o LED e Botão liga/desliga o LED
*/

int LED = 9;
int b1 = 3;

bool estadoLED = false;
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
    estadoLED = !estadoLED;
    digitalWrite(LED, estadoLED);
    delay(500);
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