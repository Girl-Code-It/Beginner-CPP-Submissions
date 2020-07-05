/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>

using namespace std;
int main()
{
	


int salary,service, bonus, total_salary;

cout<<"Enter your slary and your time for how long u r serving this company";
cin>>salary>>service;

if(service > 5)
{
	bonus = 5*salary/100;
	total_salary = bonus+salary;
}
else
{
	total_salary = salary;
}
cout<<"Your salary by adding bonus is"<<total_salary;
return 0;
}
