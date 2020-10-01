//Write a program to print absolute value of a number entered by user.
using namespace std;
#include<iostream>
int main()
{
    int num;
    cout<<"\n Enter a number :";
    cin>>num;
    cout<<"\n Absolute value of the given number is :";
    if(num<0){
        cout<<num*(-1)<<endl;
    }
    else{
        cout<<num<<endl;
    }
    return 0;
}
