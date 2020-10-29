#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch[20];
    int i;
    cout<<"Enter the string :";
    cin.getline(ch,20);
    for(i=0;ch[i]!='\0';i++);
    cout<<" Length of the given string ="<<i;
    return 0;
}
