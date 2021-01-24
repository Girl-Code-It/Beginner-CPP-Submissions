/*
Write a program to display string from backward.

*/
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "; getline(cin, str);

    cout<<"Reverse of string: ";

    for(int i = 0; i < str.length(); i++)
    cout<<str[str.length()-1-i];

    return 0;
}