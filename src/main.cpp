#include <Arduino.h>
#include "lcd_lib.h"
lcd_lib lcd;
void setup()
{/*
  for(int p=0;p<10;p++)
  {
    pinMode(p,OUTPUT);
  }*/
  DDRH |= 0x78;
  DDRE |= 0x38;
  DDRG |= 0x20;
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  lcd.Lcd_Init();
 //LCD_Clear(0xf800);
}

void loop()
{
    lcd.LCD_Clear(0xf800);
    lcd.LCD_Clear(0x07E0);
    lcd.LCD_Clear(0x001F);
  /*   
  for(int i=0;i<1000;i++)
  {
    Rect(random(300),random(300),random(300),random(300),random(65535)); // rectangle at x, y, with, hight, color
  }*/
  
//  LCD_Clear(0xf800);
}
