#define pinPIR 7
void setup() 
{//1
  pinMode(pinPIR, INPUT); //Define pino 7 como entrada
  Serial.begin(9600);     //inicia o monitor serial
}//1

void loop() 
{//2
  bool valorPIR = digitalRead(pinPIR);  //Variavel de leitura do pino
  //Se for feita a leitura do pino
  if (valorPIR) 
  {//3
     Serial.println("DETECTADO");
  }//3 
  else 
  {//4
     Serial.println("------");
  }//4
}//2 
