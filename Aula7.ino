/*Entender atuadores(Através do relé, é possivel que atravez de um pulso de baixa tensão 
controlar um dispositivo de alta tensão) 
Pratica: Ligar lampada através do relé
*/

int rele = 7;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {
  digitalWrite(rele, HIGH); // liga
  delay(5000);

  digitalWrite(rele, LOW);  // desliga
  delay(5000);
}