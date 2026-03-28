#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C 주소는 보통 0x27 또는 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init(); // LCD 초기화
  lcd.backlight(); // 백라이트 켜기

  lcd.setCursor(0, 0); // 1행 0열
  lcd.print("Hello, World!");

  lcd.setCursor(0, 1); // 2행 0열
  lcd.print("Arduino LCD");
}

void loop(){
  // 아무것도 없음(계속 표시)
}