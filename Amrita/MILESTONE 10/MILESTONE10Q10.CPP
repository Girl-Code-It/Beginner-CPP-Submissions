// PROGRAM TO WRITE A FUNCTION TO ADD TWO NUMBERS
#include<iostream>
using namespace std;

void add(float a , float b)
{
   float sum=a+b;
   cout<<"\nTHE SUM OF THE GIVEN NUMBERS ARE :\t "<<sum;
}

int main ()
{
    float num1,num2;
    cout<<"\nENTER THE NUMBERS TO BE ADDED :\n ";
    cin>>num1>>num2;
    add(num1,num2);
    return 0;
}
