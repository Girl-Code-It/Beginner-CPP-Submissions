//Write a C program to find HCF (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
	long long int num1,num2,hcf=1,min;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	min=(num1<num2)?num1:num2;
	for(int i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
	}
	cout<<"hcf= "<<hcf<<endl;
	}
