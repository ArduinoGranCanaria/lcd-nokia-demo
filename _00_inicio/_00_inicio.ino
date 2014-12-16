#include "pcd8544.h"

//Creamos un objeto PCD8544
pcd8544 lcd(5, 6, 7);

void setup(void)
{
  //Encendemos la luz
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
  
  lcd.begin(); //Inicializamos el LCD
 
  lcd.setCursor(0,0); // Colocamos el cursor en el origen, fila 0 columna 0
  
  lcd.println("Hola Mundo!"); //Imprimimos una linea
}

void loop(void)
{
  //Hacemos parpadear la luz
  digitalWrite(8, !digitalRead(8));
  delay(500);
}

