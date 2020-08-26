#include<iostream>
#include<cstdlib>
#include<string>
#define MAX 100
using namespace std;

int main()
{
    //program to display string from backward
    int length;
    string str;
    cout << "Enter the string\n";
    cin >> str;

    length = str.length();

    for(int i=length; i>=0; i--)
    {
        cout << str[i];
    }
}   
