#include <iostream>
#include <math.h>
using namespace std;
void armstrong_number(int start, int en);

int main()
{
    int start, en;
    cout<<"input a lower limit : ";
    cin>>start;
    cout<<"input a upper limit : ";
    cin>>en;
    armstrong_number(start, en);
    return 0;
}

void armstrong_number(int start, int en)
{
    long long int num, ld=0, n=1, count=0, sum=0, m;
    for (n=start; n<=en; n++)
  {
        num=n;
     while(num>0)
    {
        num=num/10;
        count++;
    }

    m=n;
    sum=0;
    while (m>0)
    {
        ld=m%10;
        m=m/10;
        sum=sum+(pow(ld,count)+0.5) ;
    }
    if(sum==n)
    cout<<"--> "<<n<<" is an armstrong number."<<endl;
    count=0;
  }
}
