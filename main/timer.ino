boolean timePassed(long int prev, int interval){
  if(millis() - prev > interval){
    return true;
  }
  return false;
}
