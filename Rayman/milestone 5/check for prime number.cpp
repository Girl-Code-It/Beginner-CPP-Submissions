#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, i, prime;
    cout<<"enter a number : \n";
    cin>>num;
    for(i=2; i<num; i++)       //a prime number is divisible by 1 and the number itself only
    {
        if(num%i==0)
        {
           prime=0;            //prime is a flag variable.
           break;              // if prime=1 it is prime.
        }                      // if prime=0 it is not prime.
        else
        {
           prime=1;
        }

    }
            if(prime==1)
        {
            cout<<"it is a prime number.";
        }
        else
        {
            cout<<"it is not a prime number.";
        }

    return 0;
}
