//Write a C program to count number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
	long long int n,count=0,r;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	cout<<"no of digits= "<<count;
}
