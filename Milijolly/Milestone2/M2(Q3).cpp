// Milestone2
/* 4.A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.  */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{ int s,n,bonus;
	cout<< "Enter your salary"<<endl;
	cin>>s;
	
	cout<< "Enter your number of years of service "<<endl;
	cin>>n;
	
	if(n>5)
	{
	bonus= 0.05*s;
	cout<<"The net bonus amount is "<<bonus;}
		
	else	
	cout<< "insufficient work experience ";
	
	getch();
    return 0;
}
