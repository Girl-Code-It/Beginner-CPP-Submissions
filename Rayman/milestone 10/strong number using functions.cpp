#include <iostream>
#include <math.h>
using namespace std;
void strong_number(int start, int en);

int main()
{
    int start, en;
    cout<<"input a lower limit : ";
    cin>>start;
    cout<<"input a upper limit : ";
    cin>>en;
    strong_number(start, en);
    return 0;
}

void strong_number(int start, int en)
{
   long long int num=0, n, i, ld, factorial=1, sum=0;
   for(num=start; num<=en; num++)
    {
    sum=0;
    n=num;
    while (n>0)
    {
        ld=n%10;
        if(ld!=0)
       {
           factorial=1;
           for(i=1; i<=ld; i++)
           {
               factorial*=i;
           }
       }
       else
       {
           ld=1;
       }
        sum+=factorial;
        n=n/10;
    }
    if(sum==num)
    cout<<"--> "<<sum<<" is a strong number."<<endl;
    }
}
