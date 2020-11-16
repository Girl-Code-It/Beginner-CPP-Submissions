//Write a C program to find sum of all prime numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i=2,count=0,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	while(i!=n)
	{
		for(int j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				count=1;
				break;
			}
		}
		if(count!=1)
		{
			sum=sum+i;
		}
		count=0;
		i++;
	
	}
	cout<<" sum of all prime numbers between 1 and "<<n<<" is "<<sum;}
