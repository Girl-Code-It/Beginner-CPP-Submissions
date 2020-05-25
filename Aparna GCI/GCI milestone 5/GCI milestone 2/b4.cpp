#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int s,yos,b;
    cout<<"Enter year of service"<<endl;
    cin>>yos;
    cout<<"Enter the salary"<<endl;
    cin>>s;
    if(yos>5)
        {
            b=0.05*s;
            cout<<"Bonus amount "<<b;
        }
        else
            cout<<"no bonus";
        return 0;
}
