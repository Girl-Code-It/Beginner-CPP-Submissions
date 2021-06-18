/*
Define a program to find out whether a given number is even or odd.

*/
#include <iostream>
using namespace std;

bool isOdd(int a)
{
    return a%2 != 0;
}
int main()
{
    int a;
    cout<<"Enter a number: "; cin>>a;

    if(isOdd(a)) cout<<a<<" is Odd"<<endl;
    else cout<<a<<" is Even"<<endl;
    return 0;
}