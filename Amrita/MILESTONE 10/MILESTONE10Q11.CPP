// PROGRAM THAT RETURNS PRODUCT OF TWO NUMBERS VIA FUNCTIONS

#include<iostream>
using namespace std;

float prod(float a , float b)
{
    return a*b;
}

int main ()
{
    float num1,num2;
    cout<<"ENTER THE TWO NUMBERS"<<endl;
    cin>>num1>>num2;
    cout<<"THE PRODUCT IS :"<<prod(num1,num2);
    return 0;
}
