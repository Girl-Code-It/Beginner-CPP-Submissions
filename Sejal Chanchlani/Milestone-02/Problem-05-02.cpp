//Write a C program to find sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	while(i!=n)
	{
	sum=sum+i;
	i++;	
	}
	cout<<"sum="<<sum;
}
