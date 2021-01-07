/*
Define a function to find out if number is prime or not.

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
int main()
{
    int a;
    cout<<"Enter the number: "; cin>>a;

    if(isPrime(a)) cout<<a<<" is Prime"<<endl;
    else cout<<a<<" is not Prime"<<endl;
    return 0;
}