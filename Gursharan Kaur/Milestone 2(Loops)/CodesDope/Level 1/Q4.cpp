#include<iostream>
using namespace std;
int main()
{
    int years, salary, bonus=0;
    cout<<"Enter Salary and Years of service";
    cin>>salary>>years;
    if(years>5)
    {
        bonus=salary*5/100;
    }
    cout<<"Bonus : "<<bonus;

}
