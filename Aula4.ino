/*
Entender Lógica, if else, for, while var(int, float, bool) 
Pratica: Semáforo com tempo, apertar botão duas vezes
*/

/*
int armazenar números inteiros, sem casas decimais
float armazenar números com casas decimais
bool armazenar valores booleanos (true ou false)
char armazenar caracteres individuais
String armazenar sequências de caracteres (texto)
long armazenar números inteiros maiores que int
double armazenar números de ponto flutuante com maior precisão
byte armazenar números inteiros de 0 a 255
unsigned int armazenar números inteiros positivos de 0 a 65535
short armazenar números inteiros menores que int
unsigned long armazenar números inteiros positivos maiores que long
*/

int LED = 9;
int b1 = 3;
int contador = 0;


void ifElseLoop(){
    if (b1 == HIGH){
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}
void forLoop(){
    for (int i = 0; i < 10; i++){
        digitalWrite(LED, HIGH);
        delay(500);
        digitalWrite(LED, LOW);
        delay(500);
    }
}

void whileLoop(){
    while (digitalRead(b1) == HIGH){
        digitalWrite(LED, HIGH);
    }
}

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(b1, INPUT);

}

void loop() {
    /*Pratica ligar led com 2 cliques*/
    if (digitalRead(b1) == HIGH){
        contador++;
        delay(500);

        if (contador == 2){
            digitalWrite(LED, HIGH);
            contador = 0; //Reseta o contador
        }
    }

}