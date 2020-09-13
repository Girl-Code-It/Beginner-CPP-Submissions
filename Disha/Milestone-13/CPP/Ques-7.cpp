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
    int i,j;
    for(i=0,j=0;i<=s.length() && s2[j]!='\0';i++)
    {
        if(s[i]==s2[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==s2.length())
    {
        cout<<"Starting position fount at :"<<i-j+1;
    }
    else
    {
        cout<<"Not found ";
    }
    return 0;
}
