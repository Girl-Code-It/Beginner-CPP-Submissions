//Write a program to convert a string in uppercase

using namespace std;
#include<iostream>
int main()
{
    string str;
    cout<<" Enter a string :";
    getline(cin,str);
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    cout<<"\n Output :"<<str;
    return 0;
}
