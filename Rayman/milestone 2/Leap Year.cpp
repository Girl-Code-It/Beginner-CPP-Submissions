/*
level 2 question 1
Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if
the year is century year like 2000, 1900, 2100 then it
must be divisible by 400.
*/
#include <iostream>
using namespace std;

int main()
{
    int year;
     cout<<"enter the year : ";
     cin>>year;

        if(year%4 == 0)
          {
              if (year%100 == 0)
              {
                  if (year%400 == 0)
                  {
                      cout<<year<<" is a leap year.\n";
                  }
                  else
                  cout<<year<<" is not a leap year.\n";
              }
              else
              cout<<year<<" is a leap year.\n";
          }
        else
        cout<<year<<" is not a leap year.\n";
    return 0;
}
