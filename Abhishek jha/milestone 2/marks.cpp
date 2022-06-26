#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter the marks obtained"<<endl;
	cin>>marks;
	if(marks<25)
	{
		cout<<"grade - F";
	}
	if(marks>=25)
	{
		if(marks<=45)
		cout<<"grade - E";
	}
	if(marks>45)
	{
		if(marks<=50)
		cout<<"grade - D";
	}
	if(marks>50)
	{
		if(marks<=60)
		cout<<"grade - C";
	}
	if(marks>60)
	{
		if(marks<=80)
		cout<<"grade - B";
	}
	if(marks>80)
	{
		cout<<"grade - A";
	}
	return 0;
}
