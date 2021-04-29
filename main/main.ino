#include <EEPROM.h>

void setup() {
  // put your setup code here, to run once:
  initSerial();
  initEEPROM();
  initElectricsInput();
  initElectricsOutput();
  initTriggerInput();
  initInjectorOutput();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
