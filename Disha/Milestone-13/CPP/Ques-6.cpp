 #include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string str;
    int i,j,flag=0;
    cout<<" Enter the string :";
    getline(cin,str);
    for(i=0,j=str.length()-1;i<=str.length()/2;i++,j--)
    {
        if(str[i]!=str[j])
            flag=1;
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;
}
