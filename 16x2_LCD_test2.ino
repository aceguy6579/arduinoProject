#include <Wire.h>

void setup(){
  Wire.begin();
  Serial.begin(9600);
  for (byte addr = 8; addr < 120; addr++){
    Wire.beginTransmission(addr);
    if (Wire.endTransmission() == 0){
      Serial.print("Found: 0x");
      Serial.println(addr, HEX);
    }
  }
}

void loop(){
  
}