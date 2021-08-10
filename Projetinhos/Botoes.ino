int led = 5;
int ledA = 4;
int bot1 = 6;
int bot2 = 7;
int val1 = 0;
int val2 = 0;
void setup()
{//1
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
}//1

void loop()
{//2
  serial();
  val1 = digitalRead(bot1);
  val2 = digitalRead(bot2);
  digitalWrite(led, val1);
  digitalWrite(ledA, val2);
}//2
///*
void serial()
{//3
 Serial.print("Acende led =");
 Serial.println(val1); 
 delay(1000);
 Serial.print("Acende ledA =");
 Serial.println(val2); 
 delay(1000);
}//3
///*
