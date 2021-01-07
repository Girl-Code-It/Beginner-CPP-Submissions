//Write a C program to calculate sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{
	long long int n,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
		
	}
	cout<<" sum = "<<sum;
	
}
