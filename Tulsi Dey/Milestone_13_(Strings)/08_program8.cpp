/*
Write a program to reverse a string.

*/
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "; getline(cin,str);

    cout<<"Reverse of string: ";
    string revs = "";

    for(int i = 0; i < str.length(); i++)
    revs += str[str.length()-1-i];

    cout<<revs;

    return 0;
}