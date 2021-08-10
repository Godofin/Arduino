#include <LiquidCrystal.h> 
//Add a biblioteca do LCD

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//Entradas do arduino
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);//Indica numero de colunas por linhas
  Serial.begin(9600);
}

void loop() {
  //lcd.clear(); //Limpa o LCD
  
 /* lcd.setCursor(0, 0);// Jogo da batalha naval, Coluna por linha
  lcd.print("Hello World!");// "Imprime" a mensagem no LCD
  delay(1000);
  lcd.setCursor(1,1); 
  lcd.print(millis() / 1000);// Tempo de contagem */
    //lcd.clear();
  //AUTOSCROLL();
  BLINK();
  //BLANK();
 // SCROLL_LEFT();
  //SCROLL_RIGHT();
  //SERIAL_INPUT();
}
    
 void AUTOSCROLL(){
         
   lcd.setCursor(16, 0);
    lcd.autoscroll();
    lcd.print("OI ");
    delay(1000);
     lcd.print("UMA PEDRA ");
    delay(1000);
    lcd.noAutoscroll();
    lcd.clear();
    delay(500);
}
  void BLINK(){
    lcd.setCursor(0, 0);
    lcd.print("OIII BIANCAAAA!!!");
    lcd.noCursor();
    delay(500);
    lcd.cursor();
    delay(500);
  }
void BLANK(){
 lcd.setCursor(0, 0);
    lcd.print("DICK DANGER");
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
  lcd.setCursor(1, 4);
    lcd.print("JHONNYS");
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
}
void SCROLL_LEFT(){
  lcd.clear();
  lcd.setCursor(16,0);
  lcd.print("falouuu");
    delay(500);
  for(int posicao=0;posicao=16;posicao++){
    lcd.scrollDisplayLeft();
    delay(200);
  }
}
void SCROLL_RIGHT(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
    delay(500);
  for(int posicao=0;posicao=16;posicao++){
    lcd.scrollDisplayRight();
    delay(200);
  }
}
void SERIAL_INPUT(){
  if(Serial.available()){
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}
