#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int ca,ch;
    float p;
    char ans;
    cout<<"Enter no. of classes held"<<endl;
    cin>>ch;
    cout<<"Enter no. of classes attended"<<endl;
    cin>>ca;
    cout<<"Any medical cause?"<<endl;
    cin>>ans;
    p=(ca/ch)*100;
    if(p<=75)
        cout<<"Allowed";
    else
        if(p<75&&ans=='y')
        cout<<"Allowed";
    else cout<<"not allowed";
    return 0;
}
