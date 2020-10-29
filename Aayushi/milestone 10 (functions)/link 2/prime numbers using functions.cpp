#include <iostream>
#include <math.h>
using namespace std;
void prime_number(int start, int en);

int main()
{
    int start, en;
    cout<<"input a lower limit : ";
    cin>>start;
    cout<<"input a upper limit : ";
    cin>>en;
    prime_number(start, en);
    return 0;
}

void prime_number(int start, int en)
{
   int num, i, prime;
   for (num=start; num<=en; num++)
    {
        for(i=2; i<num; i++)       //a prime number is divisible by 1 and the number itself only
        {
              if(num%i==0)
              {
                   prime=0;
                   break;
              }
              else
              {
                   prime=1;
              }
        }

         if(prime==1)
        {
            cout<<"--> "<<num<<" is a prime."<<endl;
        }
    }
}
