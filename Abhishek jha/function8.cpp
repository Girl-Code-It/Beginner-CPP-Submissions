#include <iostream>
using namespace std;
int findage(int curr_date,int curr_mon,int curr_year,int birth_date,int birth_mon,int birth_year)
{
    for (int i = birth_year; i < curr_year; i++)
    {
        /* code */
      if (i%400==0)
    {
        int mon[]={31,29,31,30,31,30,31,31,30,31,30,31};
    }
    else if (i%100==0)
    {
        int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
    }
    else if (i%4==0)
    {
        int mon[]={31,29,31,30,31,30,31,31,30,31,30,31};
    }
    else
    {
        int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
    }
    
    
    
    }
}
