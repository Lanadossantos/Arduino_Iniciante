/*
Entender controle analogico(analogRead() (0-1023) 2 bytes, analogWrite() (PWM) 1 byte) 
Pratica: Potênciometro controla brilho do LED
AnalogRead ler de 0 a 1023
AnalogWrite escreve de 0 a 255
*/

int potenciometro = A0;
int LED = 9;

void setup(){
    pinMode(LED, OUTPUT);
}

void loop(){
    int valorPotenciometro = analogRead(potenciometro);
    int brilho = valorPotenciometro / 4; //1023 ÷ 4 ≈ 255
    analogWrite(LED, brilho);
}