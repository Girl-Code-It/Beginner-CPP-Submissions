#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the marks "<<endl;
    cin>>m;
    if(m<25)
        cout<<"F";
    else
        if(m>=25&&m<45)
        cout<<"E";
    else
        if(m>=45&&m<50)
        cout<<"D";
    else
        if(m>=50&&m<60)
        cout<<"C";
    else
        if(m>=60&&m<80)
        cout<<"B";
    else
        if(m>=80)
        cout<<"A";
    else
        cout<<"wrong input";
    return 0;
}
