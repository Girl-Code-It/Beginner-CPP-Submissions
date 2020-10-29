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
    int num=0, i, sum=0, n;
    for(n=1; n<=en; n++)
   {
    num=n;
    for(i=start; i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if (sum==num)
    cout<<"-->"<<sum<<" is a perfect number."<<endl;
    sum=0;
   }
}
