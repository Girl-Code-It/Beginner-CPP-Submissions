#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of first integer"<<endl;
	cin>>a;
	cout<<"enter the value of second integer "<<endl;
	cin>>b;
	if(a<b)
	{
		cout<<"greater number is"<<b;
	}
	else if(a==b)
	{
		cout<<"both are equal";
		
	}
	else
	cout<<"greater integer is "<<a;
	return 0;
}
