#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find sum of all prime numbers upto n

    int n, sum=0;
    bool isPrime;

    cout << "Sum of all prime numbers upto: " << endl;
    cin >> n;

    for(int i=2; i<=n; i++)
    {
        isPrime = true;
        for(int j=2; j < i; j++)
        {
            if(i%j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
            sum = sum + i;
    }
    cout << "Sum of all prime numbers between 1 to " << n << " is :  " <<  sum;
}

