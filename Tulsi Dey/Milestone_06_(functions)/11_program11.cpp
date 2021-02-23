/*
Define a function to print the prime factors of a number.

*/
#include <iostream>

using namespace std;

bool isPrime(int a)
{
    if(a == 1) return false;
    if(a == 2) return true;

    for(int i = 2; i*i <= a; i++)
    if(a%i == 0)
    return false;
    return true;
}
void getPrimeFact(int a)
{
    for(int i = 1; i < a; i++)
    {
        if(a%i == 0 && isPrime(i))
        cout<<i<<" ";
    }
}
int main()
{
    int a;
    cout<<"Enter the number: "; cin>>a;

    getPrimeFact(a);

    return 0;
}