//Write a C program to find frequency of each digit in a given integer.
#include<iostream>
using namespace std;
int main()
{
	long long int n,ele,temp,r,count=0;
	cout<<" enter number "<<endl;
	cin>>n;
	temp=n;
	cout<<"enter digit whose frequency needs to be found out "<<endl;
	cin>>ele;
	while(n!=0)
	{
		r=n%10;
		if(ele==r)
		{
			count++;
		}
		n=n/10;
	}
	cout<<"count of digit = "<<count;
}
	
