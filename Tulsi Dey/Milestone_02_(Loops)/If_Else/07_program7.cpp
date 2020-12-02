/*
Write a program to print absolute vlaue of a number entered by user.
E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1

*/
#include <iostream>
using namespace std;

int main()
{
    int value;
    cout<<"Enter your value: ";
    cin>>value;

    if(value < 0) value = -(value);

    cout<<value;
    return 0;
}