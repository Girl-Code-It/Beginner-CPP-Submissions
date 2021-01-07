//Write a C program to find all factors of a number.
#include<iostream>
using namespace std;
int main()
{
	int i;
	long long int num;
	cout<<"enter number whose factors needs to be calculated"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ,";
		}
	}}
