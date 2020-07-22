  
bool checklimit(float param,float lower_limit ,float upper_limit)
{
   if(param < lower_limit || param > upper_limit)
   {
    return false;
   }
  return true;
}
  
bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
bool ret = checklimit(bpm, 70 , 150)  && checklimit(spo2,80 ,100 ) && checklimit(resp_Rate,30,80);
return ret;
}

