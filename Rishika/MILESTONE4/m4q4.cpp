//q4- wap to calculate HCF of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,hcf=1,m;
	cout<<"Enter two numbers- ";
	cin>>n1>>n2;
	m=min(n1,n2);
	for(i=1;i<=m;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
		hcf=i;
		}
	}
	cout<<"hcf of number is= "<<hcf;
}
