//Write a program to check if a year is leap year or not.

using namespace std;
#include<iostream>
int main()
{
    int year;

    cout<<"\n Enter a year :";
    cin>>year;

    if(((year%4==0) && (year%100 !=0)) || (year%400==0))
    {
        cout<<"\n Yes,this is a leap year \n";
    }
    else{
        cout<<"\n No,this is not a leap year \n";
    }

    return 0;
}
