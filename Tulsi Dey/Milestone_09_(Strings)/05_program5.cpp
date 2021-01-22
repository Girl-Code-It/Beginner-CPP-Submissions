/*
Write a program to compare two strings they are exact equal or not.

*/
#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cout<<"Enter the first string: "; cin>>a;
    cout<<"Enter the second string: "; cin>>b;

    if(a == b) cout<<"Equal";
    else cout<<"Not Equal";

    return 0;
}