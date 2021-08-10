#include <LiquidCrystal.h> 
//Add a biblioteca do LCD

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//Entradas do arduino
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Define as funções do cristal líquido

void setup() 
{//1
  lcd.begin(20, 4);	//Indica numero de colunas por linhas
  Serial.begin(9600);	//Liga o monitor serial
}//1

void loop()
{//2
  lcd.setCursor(0, 0);		// Jogo da batalha naval, Coluna por linha
  lcd.print("**Sala Climatizada**");// "Imprime" a mensagem no LCD
  lcd.setCursor(0, 1);		// Jogo da batalha naval, Coluna por linha
  lcd.print("Temperatura=");	// "Imprime" a mensagem no LCD
  lcd.setCursor(0, 2);		// Jogo da batalha naval, Coluna por linha
  lcd.print("Cooler");	// "Imprime" a mensagem no LCD
}//2