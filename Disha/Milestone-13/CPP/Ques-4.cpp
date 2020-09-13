#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s,s2;
    cout<<" Enter the string :";
    getline(cin,s);
    cout<<" Enter string 2:";
    getline(cin,s2);
    s=s+" "+s2;


    cout<<"\n Result after concatenating both the strings :"<<s;
    return 0;
}

