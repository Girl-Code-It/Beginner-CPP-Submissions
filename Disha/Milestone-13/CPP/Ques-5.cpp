#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string s,s2;
    cout<<" Enter string 1 :";
    getline(cin,s);
    cout<<" Enter string 2:";
    getline(cin,s2);

    if(s==s2)
        cout<<" Strings are equal ";
    else
        cout<<" Strings are not equal ";
    return 0;
}

