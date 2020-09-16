#include<iostream>
using namespace std;
int main ()
{
    int num1,num2;
    cout<<"ENTER THE NUMBERS WHOSE HCF YOU WANT TO DETERMINE\n";
    cin>>num1>>num2;
    while (num1 != num2)
    {
        if (num1> num2)
        num1=num1-num2;
        else
           num2= num2-num1;

    }
    cout<<"HCF OF THE GIVEN NUMBERS IS \t"<<num2;
    return 0;
}
