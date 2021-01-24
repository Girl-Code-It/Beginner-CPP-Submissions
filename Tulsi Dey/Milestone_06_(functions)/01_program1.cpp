/*
Write a program to print the sum of two numbers entered by user by defining your own function.

*/
#include <iostream>

using namespace std;

int getSum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout<<"Enter first number: "; cin>>a;
    cout<<"Enter second number: "; cin>>b;

    printf("Sum of %d and %d is %d",a,b,getSum(a,b));
    return 0;
}