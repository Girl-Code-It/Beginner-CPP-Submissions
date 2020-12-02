/*
Take values of length and breadth of a rectangle from user
and check if it is square or not.

*/
#include <iostream>

using namespace std;
int main()
{
    int length, breadth;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter Breadth : ";
    cin>>breadth;
    if(length == breadth)
    cout<<"Its a square";
    else
    cout<<"Its not a square";
    return 0;
}