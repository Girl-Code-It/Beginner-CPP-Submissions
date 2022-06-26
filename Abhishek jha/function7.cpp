#include <iostream>
using namespace std;
int taxCalculator(int gs,int ts)
{
  int ti,tax;
  if (ts>100000)
  {
      ti=gs-100000;
  }
  else
  {
     ti=gs-ts;
  }
   

      if (ti<=100000)
      {
          tax=0;
      }
      
    else if (ti>100000 && ti<=200000)
     {
         tax=(ti-100000)/10;
     }
     
     else if (ti>200000 && ti<=500000)
     {
         tax=((ti-100000)/10)+((ti-200000)/20);
     }
    
     else
     {
         tax=((ti-100000)/10)+((ti-200000)/20)+((ti-500000)/30);
     }
     
     return tax;
      
      };
int main()
{
    int gs,ts;
    cin>>gs;
    cin>>ts;
    cout<<taxCalculator(gs,ts);
    return 0;
}