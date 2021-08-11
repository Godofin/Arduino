#define MotorA_sentido1 2 //Define o sentido do motor 1
#define MotorA_sentido2 4 //Define o outro sentido do motor 1
#define MotorB_sentido1 8 //Define o sentido do motor 2
#define MotorB_sentido2 9 //Define o outro sentido do motor 1
#define MotorA_PWM 3  
#define MotorB_PWM 10  
 
#define veloc0 0
#define veloc1 80
#define veloc2 180
#define veloc3 255
 
#define Sensor_direita 6  //Sensor conectado a direita do carrinho
#define Sensor_esquerda 7 //Sensor conectado a esquerda do carrinho
 
bool direita, esquerda;
 
void setup() {
  Serial.begin(9600);               //Liga o monitor serial
  pinMode(MotorA_sentido1, OUTPUT); //Define pino 2 como saída
  pinMode(MotorA_sentido2, OUTPUT); //Define pino 4 como saída
  pinMode(MotorB_sentido1, OUTPUT); //Define pino 8 como saída
  pinMode(MotorB_sentido2, OUTPUT); //Define pino 9 como saída
  pinMode(MotorA_PWM, OUTPUT);      //Define pino 3 como saída
  pinMode(MotorB_PWM, OUTPUT);      //Define pino 10 como saída
  pinMode(Sensor_direita, INPUT);   //Define sensor como entrada
  pinMode(Sensor_esquerda, INPUT);  //Define sensor como entrada
  
}
 
void loop() {
   //Define o sentido de rotação dos motores
  digitalWrite(MotorA_sentido1, LOW);
  digitalWrite(MotorA_sentido2, HIGH);
  digitalWrite(MotorB_sentido1, HIGH);
  digitalWrite(MotorB_sentido2, LOW);
  
  //Leituras dos Sensores
  direita = digitalRead(Sensor_direita);
  esquerda = digitalRead(Sensor_esquerda);
  Serial.print(direita);
  Serial.print(" || ");
  Serial.println(esquerda);
 
  //Rodando os motores dependendo das leituras
 if(direita == false && esquerda == false){
 analogWrite(MotorA_PWM, veloc2);
 analogWrite(MotorB_PWM, veloc2);
 } else if(direita == false && esquerda == true){
 delay(400);
 analogWrite(MotorA_PWM, veloc2);
 analogWrite(MotorB_PWM, veloc1);
 delay(400);
 }else if(direita == true && esquerda == false){
 delay(400);
 analogWrite(MotorA_PWM, veloc1);
 analogWrite(MotorB_PWM, veloc2);
 delay(400);
 
 }else if(direita == true && esquerda == true){
 analogWrite(MotorA_PWM, veloc0);
 analogWrite(MotorB_PWM, veloc0);
 }
} 
