#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter the no."<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        if(r==0)
            cout<<"zero ";
        else
            if(r==1)
            cout<<"one ";
        else
            if(r==2)
            cout<<"two ";
        else
            if(r==3)
            cout<<"three ";
        else
            if(r==4)
            cout<<"four ";
        else
            if(r==5)
            cout<<"five ";
        else
            if(r==6)
            cout<<"six ";
        else
            if(r==7)
            cout<<"seven ";
        else
            if(r==8)
            cout<"eight ";
        else
            if(r==9)
            cout<<"nine ";
        else
            cout<<"wrong character ";
            n=n/10;
    }
    return 0;
    }

