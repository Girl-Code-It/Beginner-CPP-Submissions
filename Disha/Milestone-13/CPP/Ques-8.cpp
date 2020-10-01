//to reverse a string

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    cout<<" Enter the string :";
    getline(cin,s);
    cout<<"\n Reversed string :";
    for(int i=s.length();i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}
