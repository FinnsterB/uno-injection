const byte IGN_KEY_ACC = 12;
const byte IGN_KEY_START = 11;

void initElectricsInput(){
  pinMode(IGN_KEY_ACC, INPUT);
  pinMode(IGN_KEY_START, INPUT);
}
