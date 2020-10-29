/*
An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits.
For example -
6 = 6^1 = 6
371 = 3^3 + 7^3 + 1^3 = 371
*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0, en, n=1, ct=0, sum=0, m;
    cout<<"enter a upper limit to check armstrong number : "<<endl;
    cin>> en;
    for (n=1; n<=en; n++)
  {
        num=n;
     while(num>0)
    {
        num=num/10;
        ct++;
    }

    m=n;
    sum=0;
    while (m>0)
    {
        ld=m%10;
        m=m/10;
        sum=sum+(pow(ld,ct)+0.5) ;
    }
    if(sum==n)
    cout<<"--> "<<n<<" is an armstrong number."<<endl;
    ct=0;
  }
    return 0;
}
