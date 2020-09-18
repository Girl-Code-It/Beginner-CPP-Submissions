#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to check if a number is prime or not

    int num;
    bool isPrime = true;

    cout << "Enter a number to check prime" << endl;
    cin >> num;

    for(int i=2; i<num; i++)
    {
        if( num%i == 0)
        {
            isPrime =  false;
        }
    }
    if(isPrime == true)
        cout << "It's a  prime number";
    else
        cout << "It's not a prime number";

}

