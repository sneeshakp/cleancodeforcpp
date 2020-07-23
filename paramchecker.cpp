  
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

//change above part of code to satisfy open closed principle
enum health_param
{
  bpm,
  spo2,
  resp_rate,
  maximum_number
};

class interface_limit
{
  public:
  float upper_limit;
  float lower_limit;
};
  
class bpmeasure :public interface_limit
{
  float bpm;
  interface_limit interface_limit_obj1.upper_limit = 150;
  interface_limit interface_limit_obj1.lower_limit = 70;
  //Function can return bpm value 
  float read_bpm()
  {
  checklimit(bpm,interface_limit_obj1.upper_limit,interface_limit_obj1.lower_limit);
  //read_bpm() can be used to read bp level also  
  return bpm;
  }
  
};
class spo2measure :public interface_limit
{
  float spo2;
  interface_limit interface_limit_obj2.upper_limit = 100;
  interface_limit interface_limit_obj2.lower_limit = 80;
  //Function can return spo2 value 
  float read_spo2()
  {
  //check limit for bpm
  checklimit(bpm,interface_limit_obj1.upper_limit,interface_limit_obj1.lower_limit);
  //read_spo2() can be used to read spo2 also 
  }
  
};
class respratemeasure :public interface_limit
{
  float resp_rate;
  interface_limit interface_limit_obj2.upper_limit = 80;
  interface_limit interface_limit_obj2.lower_limit = 30;
  //Function can return resp_rate value 
  float read_resp_rate()
  {
  checklimit(bpm,interface_limit_obj1.upper_limit,interface_limit_obj1.lower_limit);
  //read_resp_rate() can be used to read resp_rate also 
  }
  
};
bool checklimit(float param,float lower_limit ,float upper_limit)
{
    if(param < lower_limit || param > upper_limit)
   {
    count_parm = count_parm + 1;
   }

}
int main()
{
  if(count_param == maximum_number)
  {
    //false status can be received here
  }
  
}
  
  
