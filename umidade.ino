// Código que inclui a biblioteca de lcd ao programa e a atribuição das portas do arduino com os pinos do lcd
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,9); 

#define pinoRele 8 // Define o pino 8 como "pinoRele"

int SensorPin = A0;
int ValAnalogIn; // Introduz o valor analógico ao código
 
void setup() {
  lcd.begin(16,2);  
  Serial.begin(9600); 
  Serial.println("Sistema de Irrigação Automatizado"); 
  pinMode(pinoRele, OUTPUT); // Declara o pinoRele como Saída
}
  
void loop() {
  int solo = analogRead(SensorPin);
  solo = map (solo, 0, 876, 0,100);
  

  Serial.print(solo); 
  Serial.println("%");

  if (solo <= 45) { 
  Serial.println("Irrigando a planta ..."); 
  digitalWrite(pinoRele, HIGH); // Altera o estado do pinoRele para nível Alto
  lcd.print(solo); 
  lcd.print("% umido"); 
  lcd.setCursor(0,1); 
  lcd.print("Irrigando ...");
  delay (1000);
  lcd.clear(); 
  }

  else { 
  Serial.println("Planta Irrigada ..."); 
  digitalWrite(pinoRele, LOW); // Altera o estado do pinoRele para nível Baixo
  lcd.print(solo);
  lcd.print("% umido");
  lcd.setCursor(0,1);
  lcd.print("Irrigada ...");
  delay (1000);
  lcd.clear();
 }
  
}