int led=6;
void setup()
{//1
  Serial.begin(9600);
  pinMode(led, OUTPUT); 
}//1

void loop()
{//2
  char tecla;
  tecla = Serial.read();
  if(tecla == 'V')
  {//3
    digitalWrite(led, HIGH);
  }//3
  if(tecla == 'C')
  {//4
    digitalWrite(led, LOW);
  }//4
}//2
