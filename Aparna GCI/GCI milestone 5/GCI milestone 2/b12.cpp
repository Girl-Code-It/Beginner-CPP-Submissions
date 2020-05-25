#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year"<<endl;
    cin>>y;
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
       cout<<"Leap year";
       else
        cout<<"not a leap year";
    return 0;
}
