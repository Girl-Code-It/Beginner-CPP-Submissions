#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
        cout<<"lowercase";
    else
        if(ch>='A'&&ch<='Z')
        cout<<"uppercase";
    return 0;
}
