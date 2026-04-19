/*
Entender controle analogico(analogRead(), analogWrite()) 
Pratica: Potênciometro controla brilho do LED
AnalogRead ler de 0 a 1023 (0-1023) 2 bytes
AnalogWrite escreve de 0 a 255 (PWM) 1 byte
*/

float potenciometro = A0;
int LED = 9;

void setup(){
    pinMode(LED, OUTPUT);
    pinMode(potenciometro, INPUT);
}

void loop(){
    float valorPotenciometro = analogRead(potenciometro);
    float brilho = valorPotenciometro / 4; //1023 ÷ 4 ≈ 255
    analogWrite(LED, brilho);
}
