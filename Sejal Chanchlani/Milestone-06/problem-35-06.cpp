//Write a C program to print all Strong numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,temp,fact,r,sum=0,i=1;
	cout<<"enter number"<<endl;
	cin>>n;
	while(i!=n)
	{
		temp=i;
		sum=0;
		fact=1;
		while(temp!=0)
		{
			r=temp%10;
			fact=1;
		
			while(r!=0)
			{
				fact=fact*r;
				r--;
			}
		
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i){
		cout<<i<<endl;}
		i++;
	}
	
}
