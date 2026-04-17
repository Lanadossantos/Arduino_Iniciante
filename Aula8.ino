/*Entender motores (controle de velocidade e direção)*/

/* ================= VARIAVEIS DE CONTROLE DE MOTORES =================
motor.atach(pin1, pin2, pinEnable) -> define os pinos de controle do motor
motor.setSpeed(velocidade) -> define a velocidade do motor (0-255)  
motor.run(direcao) -> define a direção do motor (FORWARD, BACKWARD, STOP)
o que pinEnable faz? -> é o pino que controla a velocidade do motor, 
através do sinal PWM (Pulse Width Modulation) Quanto maior a largura do pulso, maior a velocidade do motor. 

servo.attach(pin) -> define o pino de controle do servo
servo.write(angulo) -> define o ângulo do servo (0-180) 
servo.writeMicroseconds(tempo) -> define o tempo de pulso do servo (500-2500 microsegundos) 
servo.read() -> lê o ângulo atual do servo
servo.readMicroseconds() -> lê o tempo de pulso atual do servo
servo.detach() -> desativa o controle do servo, liberando o pino para outras funções
*/

#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9);
}

void loop() {
  motor.write(0);   // 0 graus
  delay(1000);

  motor.write(90);  // meio
  delay(1000);

  motor.write(180); // máximo
  delay(1000);
}