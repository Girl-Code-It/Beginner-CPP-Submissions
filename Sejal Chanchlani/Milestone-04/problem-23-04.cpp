//Write a C program to calculate factorial of a number.
#include<iostream>
using namespace std;
int main()
{
	
	long long int num,fact=1;
	cout<<"enter number whose factorial needs to be calculated"<<endl;
	cin>>num;
	while(num)
	{
		fact=fact*num;
		num--;
	}
	cout<<" factorial = "<<fact;
}
