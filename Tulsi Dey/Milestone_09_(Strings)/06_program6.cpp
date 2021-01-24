/*
Write a program to check a string is palindrome or not.

*/
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "; cin>>str;

    string rev;

    for(int i = 0; i < str.length(); i++)
    rev += str[str.length() - 1 - i];

    if(rev == str) cout<<"Palindrome";
    else cout<<"Not Palindrome";

    return 0;
}