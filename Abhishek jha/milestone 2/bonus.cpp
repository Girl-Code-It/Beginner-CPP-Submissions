#include<iostream>
using namespace std;
int main()
{
	int sal,yrs;
	cout<<"enter the years of service"<<endl;
	cin>>yrs;
	cout<<"enter the salary"<<endl;
	cin>>sal;
	if(yrs>5)
	{
		cout<<"you will get bonus"<<endl;
		cout<<" your bonus is"<<(sal*5)/100;
		
	}
	else
	cout<<"no bonus";
	return 0;
}
