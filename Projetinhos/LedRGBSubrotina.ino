byte vermelho = 11;
byte azul = 10;
byte verde = 9;

void setup () 
{//1
pinMode(vermelho, OUTPUT);
pinMode(azul, OUTPUT);  
pinMode(verde, OUTPUT); 
}//1

void loop()
{//3
  vermelhoFuncao();
  delay(500);
  azulFuncao();
  delay(500);
  verdeFuncao();
  delay(500);
  roxoFuncao();
  delay(500);
  amareloFuncao();
  delay(500);
  brancoFuncao();
  delay(500);
}//3
//Funções responsáveis por executar o brilho selecionado
void vermelhoFuncao()
{//4
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
}//4
void azulFuncao()
{//5
  digitalWrite(azul, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
}//5
void verdeFuncao()
{//6
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}//6
void amareloFuncao()
{//7
  analogWrite(azul, 0);
  analogWrite(verde, 50);
  analogWrite(vermelho, 255);
}//7
void roxoFuncao()
{//8
  analogWrite(azul, 207);
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
}//8
void brancoFuncao()
{//9
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
}//9
