//Write a C program to enter a number and print its reverse.
#include<iostream>
using namespace std;
int main()
{
	long long int n,r,sum=0;
	cout<<" enter number "<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	cout<<"reverse number - "<<sum;
}
