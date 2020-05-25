#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    char s,ms;
    cout<<"Enter the age, sex, marital status"<<endl;
    cin>>a>>s>>ms;
    if(s=='f')
        cout<<"Urban area";
    else
        if(s=='m'&&(a>=20&&a<40))
        cout<<"anywhere";
    else
        if(s=='m'&&(a>=40&&a<60))
        cout<<"urban area";
    else
        cout<<"error";
    return 0;
}
