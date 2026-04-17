/*
Entender Comunicação com monitor serial Serial.begin(), Serial.print() 
Pratica: Digitar comando no serial e fazer o LED ligar
*/

/*
Serial.begin(9600) -> Inicia a comunicação serial com uma taxa de transmissão de 9600 bits por segundo.
Serial.print() -> Envia dados para o monitor serial sem adicionar uma nova linha.
Serial.println() -> Envia dados para o monitor serial e adiciona uma nova linha.    
Serial.available() -> Retorna o número de bytes disponíveis para leitura no buffer serial.
Serial.read() -> Lê um byte de dados do buffer serial.
Serial.readString() -> Lê uma string de dados do buffer serial até encontrar um caractere de nova linha ou atingir um limite de tempo.
Serial.parseInt() -> Lê um número inteiro do buffer serial.
Serial.parseFloat() -> Lê um número de ponto flutuante do buffer serial.
*/

int LED = 9;
char comando;

void setup(){
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) { // tem dado no buffer?
    comando = Serial.read();    // lê o que foi digitado

    if (comando == '1') {
      digitalWrite(LED, HIGH);
      Serial.println("LED LIGADO");
    }

    if (comando == '0') {
      digitalWrite(LED, LOW);
      Serial.println("LED DESLIGADO");
    }
  }
}