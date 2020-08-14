//Write a program to convert a string in lowercase.

using namespace std;
#include<iostream>
int main()
{
    string str;
    cout<<" Enter the  string :";
    getline(cin,str);
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    cout<<" \nOutput :"<<str;
    return 0;
}
