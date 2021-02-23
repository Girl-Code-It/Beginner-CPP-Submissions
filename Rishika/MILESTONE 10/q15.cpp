//Q15- wap to print all armstrong numbers between a given interval.
#include<iostream>
#include<math.h>
using namespace std;
int arm(int);
void print(int,int);
int main()
{
	int u,l;
	cout<<"Enter the lower limit = ";
	cin>>l;
	cout<<"Enter the upper limit = ";
	cin>>u;
	print(u,l);
}int arm(int num)
{
	int og,sum=0,l,d;
	og=num;	
	d=int(log10(num)+1);
	while(num>0)
	{   
		l=num%10;
		sum=sum+pow(l,d);
		num=num/10;
	}
	if(sum==og)
	return 1;
	else
	return 0;
}void print(int up,int low)
{
	while(low<=up)
	{
		if(arm(low))
		cout<<low<<" ";
		low++;
	}
}
