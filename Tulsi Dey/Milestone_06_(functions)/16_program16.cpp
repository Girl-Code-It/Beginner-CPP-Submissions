/*
Write a function that takes your date of birth in YYYY, MM and DD format 
(separated by spaces) as input as well as the current date, in same format, 
and calculates your age in years, months and days. You must check for leap years 
also. Write a separate function to check for leap year.

*/
#include <bits/stdc++.h>

using namespace std;

string isLeap (int y)
{
    if(y%400 == 0)
    {
        if(y%100 == 0) return " is a leap year";
        else return " is not a leap year";
    }
    else if(y%4 == 0) return " is a leap year";
    return " is not a leap year";
}
string getAge(int y, int m, int d, int a, int b, int c)
{
    int monthes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

    if(d > c)
    { 
        b--;
        c = c + monthes[m-1];
    }
    if(m > b)
    {
        a--;
        b = b + 12;
    }
    int year = a - y, month = b - m, day = c - d;

    return (to_string(year) + " years "+ to_string(month) + " monthes " + to_string(day) + " days ");
}
int main()
{
    int y, m, d;
    int a, b, c;
    cout<<"Enter today's date (YYYY MM DD): ";
    cin>>a>>b>>c;
    cout<<"Enter your DOB (YYYY MM DD): ";
    cin>>y>>m>>d;
    
    cout<<endl;
    cout<<"Your age is "<<getAge(y,m,d,a,b,c)<<endl;;
    cout<<y<<isLeap(y)<<endl;
    return 0;
}