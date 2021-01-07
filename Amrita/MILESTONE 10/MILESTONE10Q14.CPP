// PROGRAM TO FIND THE MAXIMUM AND MINIMUM OF THE THREE NUMBERS ENTERED BY THE USER USING FUNCTIONS

#include<iostream>
using namespace std;

void maximum(float a ,float b,float c)
{
    if (a>b && a>c)
    {
        cout<<a<<endl;
    }
    if (a<b && b>c)
    {
        cout<<b<<endl;
    }
    else
        cout<<c<<endl;
}
void minimum(float a ,float b,float c)
{
    if (a<b && a<c)
    {
        cout<<a<<endl;
    }
    if (a>b && b<c)
    {
        cout<<b<<endl;
    }
    else
        cout<<c<<endl;
}

int main ()
{
    float num1,num2,num3;
    cout<<"ENTER THE THREE NUMBERS :"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"THE MAXIMUM OF THE THREE NUMBERS IS\n";
    maximum(num1,num2,num3);
    cout<<"THE MINIMUM OF THE THREE NUMBERS IS \n";
    minimum(num1,num2,num3);
    return 0;
}
