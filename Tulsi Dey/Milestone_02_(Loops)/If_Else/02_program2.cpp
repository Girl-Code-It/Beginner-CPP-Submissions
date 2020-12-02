/*
Take two int values from user and print greatest among them.

*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter first value : "; cin>>a;
    cout<<"Enter second value : "; cin>>b;
    int c = a > b ? a : b;
    cout<<c;
    return 0;
}