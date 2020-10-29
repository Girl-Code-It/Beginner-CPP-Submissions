// PROGRAM TO CALCULATE LCM OF TWO NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , hcf ,lcm;
    cout<<"ENTER THE TWO NUMBERS \n";
    cin>>num1>>num2;
    int n1=num1;
    int n2=num2;

    while (num1 != num2)
    {

     if (num1> num2)
        num1=num1-num2;
        else
           num2= num2-num1;
    }
    hcf=num2;
    cout<<num2<<endl;
    lcm=(n1*n2)/hcf;
    cout<<"LCM OF THE GIVEN NUMBER IS "<<lcm;
}
