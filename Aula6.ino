/*Entender sensores (Medir temperatura)*/

int sensorTemp = A0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    int valor = analogRead(sensorTemp);
    float tensao = valor * ( 5.0 / 1023.0); // 0–1023 -> 0–5V valor lido * 5,0/valormax
    float temperatura = tensao * 100.0; // 0 - 5V -> 0 - 500 valor max

    Serial.print("Temperatura:");
    Serial.print(temperatura);
    Serial.println(" °C");

    delay(1000);
}