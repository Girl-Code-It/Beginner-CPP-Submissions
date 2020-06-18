//Write a program to print absolute vlaue of a number entered by user.




#include<iostream>
using namespace std;


int main()
{
	int a;
	cout<<"Enter any number:";
	cin>>a;

	if(a>0)
		cout<<"The absolute value of number is:"<<a;
	else
		cout<<"The absolute value of number is:"<<-(a);


	return 0;
}