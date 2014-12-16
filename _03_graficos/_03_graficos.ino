#include "pcd8544.h"

pcd8544 lcd(5, 6, 7);

void setup(void)
{
  //Encendemos la luz
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);

  //Inicializamos el LCD
  lcd.begin();
  lcd.clear();
}

void loop(void)
{  
  for (int i = 0; i < 84; i++)
  {
    lcd.gotoRc(0,i);
    lcd.data(B01010101); //representa un valor binario en una columna
  }
  delay(1000);
  lcd.clear();
}

