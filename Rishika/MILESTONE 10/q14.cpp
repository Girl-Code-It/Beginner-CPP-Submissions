//Q14-define a function to print all prime numbers between a given range.
#include<iostream>
#include<math.h>
using namespace std;
int prime(int);
void print(int,int);
int main()
{
	int u,l;
	cout<<"Enter the lower limit = ";
	cin>>l;
	cout<<"Enter the upper limit = ";
	cin>>u;
	cout<<"Prime numbers from "<<l<<" to "<<u<<" are = "<<endl;
	print(u,l);
}int prime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		return 0;
		else
		return 1;
	}
}
void print (int up,int low)
{
	while(low<=up)
	{
		if(prime(low))
		cout<<low<<" ";
		low++;
	}
}

