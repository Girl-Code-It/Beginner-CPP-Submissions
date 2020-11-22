//Write a C program to check whether a number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
	long long int n,temp,r,sum=0;
	cout<<" enter number "<<endl;
	cin>>n;
	temp=n;
	
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"palindrome number"<<endl;
	}
	else
	cout<<"not a palindrome number"<<endl;
}
