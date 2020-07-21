  
bool bpm_check(float bpm)
{
  if(bpm < 70 || bpm > 150) {
    return false;}
  
  return true;
    
}

bool spo2_check(float spo2)
{
  if(spo2 < 80) {
    return false;}
  return true;
}

bool respRate_check(float respRate)
{
  if(respRate < 30 || respRate > 60) {
    return false;}
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
bool ret = bpm_check(bpm)  && spo2_check(spo2) && respRate_check(respRate);
  return ret;
}
