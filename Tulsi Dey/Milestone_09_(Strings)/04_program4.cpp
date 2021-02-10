/*
Write a program to concatenate one string contents to another.

*/
#include <iostream>

using namespace std;

int main()
{
    string a, b, str;
    cout<<"Enter the first string: "; cin>>a;
    cout<<"Enter the second string: "; cin>>b;
    str = a + b;

    cout<<"final string: "<<str;

    return 0;
}