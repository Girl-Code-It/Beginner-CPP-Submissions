#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, i, j, prime;
    cout<<"enter a number : "<<num<<endl;
    cin>>num;
    cout<<"prime factors of "<<num<<" are : ";
    if(num%2==0)
        cout<<"2 ,";
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            for(j=2; j<i; j++)       //a prime number is divisible by 1 and the number itself only
              {
                 if(i%j==0)
                 {
                      prime=0;             //prime is a flag variable.
                      break;              // if prime=1 it is prime.
                 }                       // if prime=0 it is not prime.
                 else
                 {
                      prime=1;
                 }
              }
               if (prime==1)
               cout<<i<<", ";
        }
    }
    return 0;
}
