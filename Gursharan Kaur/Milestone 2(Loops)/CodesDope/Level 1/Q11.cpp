/* Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ). */
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if(ch>=65 && ch<=90)
        cout<<"Entered character is uppercase.";
    else if(ch>97 && ch<=122)
        cout<<"Entered character is lowercase.";

}
