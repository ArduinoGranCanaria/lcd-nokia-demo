#include "pcd8544.h"

//Creamos un objeto PCD8544
pcd8544 lcd(5, 6, 7);

void setup(void)
{
  //Encendemos la luz
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);

  //Inicializamos el LCD
  lcd.begin();
  lcd.clear(); //limpiamos la pantalla
  lcd.setCursor(0,0);
  lcd.println("Hola Mundo!");
}

void loop(void)
{
  delay(1000);
  lcd.clear(); // mmm...
  lcd.println("Adios Mundo");
  lcd.println("un placer");
}

