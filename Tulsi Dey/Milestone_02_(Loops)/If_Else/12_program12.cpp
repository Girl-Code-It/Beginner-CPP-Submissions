/*
Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if the year
is century year like 2000, 1900, 2100 then it must be divisible by 400.

*/
#include <iostream>
using namespace std;

int main()
{
    int year;
    bool check;
    cout<<"Enter the year: "; cin>>year;

    if(year%100 == 0)
    {
        if(year%400 == 0) check = true;
    }
    else if(year%4 == 0)
    check = true;
    else 
    check = false;

    if(check) cout<<year<<" is a leap year!";
    else cout<<year<<" is not a leap year.";

    return 0;
}