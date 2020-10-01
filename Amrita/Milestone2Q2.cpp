// PROGRAM TO INPUT TWO NUMBERS AND PRINT THE GREATEST OF THEM

#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"ENTER THE TWO NUMBERS \n";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<" THE GREATER VALUE IS  "<<num1;
    else
        cout<<"THE GREATER VALUE IS  "<<num2;
    return 0;
}

