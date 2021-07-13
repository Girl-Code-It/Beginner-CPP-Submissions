/*
A company decided to give bonus of 5% to employee if his/her year 
of service is more than 5 years.
Ask user for their salary and year of service and 
print the net bonus amount.
*/
#include <iostream>
using namespace std;

int main()
{
    int salary, years;
    double bonus = 0;
    cout<<"Enter your Salary ";
    cin>>salary;
    cout<<"Enter your total years of service ";
    cin>>years;

    if(years > 5)
    bonus = 0.05*salary;
    
    cout<<"Your bonus is "<<bonus;
    return 0;
}
