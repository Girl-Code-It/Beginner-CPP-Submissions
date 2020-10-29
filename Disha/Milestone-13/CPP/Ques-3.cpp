#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    int len=0;
    cout<<" Enter the string :";
    getline(cin,s);
    for(int i=0;i<=s.length();i++)
    {
        if((s[i]==' '&&isalpha(s[i+1])) && (i>0))
        {
            len++;
        }
        else if(i==0  && isalpha(s[i]))
            len++;
    }
    cout<<"Total number of words in string are :"<<len;
    return 0;
}
