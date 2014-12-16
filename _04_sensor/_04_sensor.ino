#include <Ultrasonic.h>
#include "pcd8544.h"

pcd8544 lcd(5, 6, 7);

Ultrasonic ultrasonic(9,2);

void setup(void)
{
  //Encendemos la luz
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);

  //Inicializamos el LCD
  lcd.begin();
}

void loop(void)
{
  lcd.clear();
  lcd.setCursor(0,0);
  
  int distancia = ultrasonic.Ranging(CM);
  
  lcd.print("DIST: ");
  lcd.print(distancia);
  lcd.println("cm");
  lcd.println();
  
  int longitud = map(distancia, 0, 51,0, 84);
  for (int i = 0; i < longitud; i++)
  {
    lcd.data(B11111111); //representa un valor binario en una columna
  }
  
  delay(300);
}

