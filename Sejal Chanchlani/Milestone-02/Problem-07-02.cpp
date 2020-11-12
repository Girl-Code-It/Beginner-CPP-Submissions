//Write a C program to find sum of all odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int i=1,sum=0;
	while(i!=n)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		i++;
	}
	cout<<"sum="<<sum;
}
