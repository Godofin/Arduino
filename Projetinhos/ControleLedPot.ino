int pot = A0;	//Delcara potenciometro na entrada analógica 0
int led = 6;	//Define led no pino 6
int sensor = 0;	//Define variável do sensor conectado ao A0
int valpot = 0;	//Define o valor medido quando o valor inicial é 0
void setup()
{
  Serial.begin(9600); //Liga o monitor serial
  pinMode(led, OUTPUT);
}

void loop()
{
  sensor = analogRead(A0);	//Atribui a variável sensor, ao valor lido na porta A0
  valpot = analogRead(pot);	//Valor lido através do analogread na entrada A0 é aribuido a variável valpot
  digitalWrite(led, HIGH);
  delay(valpot);
  digitalWrite(led, LOW);
  delay(valpot);
  Serial.print("Valor lido=");	//Escreve na serial "Valor lido="
  Serial.println(sensor);		//Escreve o valor atribuido ao potenciometro
  delay(1000);
}
