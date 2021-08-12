//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int farol = 3;
void setup()
{//1
  Serial.begin(9600);
  //Define os pinos como saida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(farol, OUTPUT);
}//1
char cha;

void loop() 
{//2
  origem();
}//2

void origem()
{//2.1
    if(Serial.available() > 0)
  {//3
    cha = Serial.read();
    delay(2);
  }//3
  if(cha == 'U')
  {//4
    //código frente ponte H
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    Serial.println("Wingardium Leviosa");
  }//4
  if(cha == 'L')
  {//5
    //codigo lado esquerdo ponte H
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    Serial.println("Fábio");
  }//5
  if(cha == 'R')
  {//6
    //código ponte H direita
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    Serial.println("Quaresma");
  }//6
  if(cha == 'D')
  {//7
    //código ponte H trás
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    Serial.println("Accio");
  }//7
  if(cha == 'S')
  {//8
    digitalWrite(farol, HIGH);//Liga leds
    Serial.println("Lumos");
  }//8
  if(cha == 'C')
  {//9
    digitalWrite(farol, LOW);//desliga leds
    Serial.println("Nox");
  }//9
}//2.1
