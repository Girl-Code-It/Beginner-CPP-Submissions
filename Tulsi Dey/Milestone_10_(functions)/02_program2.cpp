/*
Define a function that returns the product of two numbers entered by user.

*/
#include <iostream>

using namespace std;

int getPdt(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout<<"Enter first number: "; cin>>a;
    cout<<"Enter second number: "; cin>>b;

    printf("product of %d and %d is %d",a,b,getPdt(a,b));
    return 0;
}