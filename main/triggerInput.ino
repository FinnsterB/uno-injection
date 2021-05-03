const byte TRIGGER_PIN = 9;
//////////////////AMOUNT OF TEETH - MISSING TOOTH////////////////////
byte triggerType = 35;
boolean missingTooth = true;
int lastTimeBetweenPulses = 0;
byte lastTrigger = 0;
//////////////////////////FINE TUNE THIS/////////////////////////////
int checkMargin = 10
/////////////////////////////////////////////////////////////////////

void setTriggerType(){
  
}

void initTriggerInput(){
  pinMode(TRIGGER_PIN = OUTPUT);
}

boolean checkMissingToothPassed(){
  if(millis()+checkMargin > lastTimeBetweenPulses){
    lastTrigger = 0;
    return true;
  }
  return false;
}

byte engineAngle(){
  return lastTrigger;
}

boolean checkEngineAngle(int desiredAngle){
  if(desiredAngle == engineAngle())
  {
    return true
  }
}
