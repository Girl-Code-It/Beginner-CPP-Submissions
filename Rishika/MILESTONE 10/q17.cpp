//Q17- wap to print all strong numbers in a given interval using functions.
#include<iostream>
#include<math.h>
using namespace std;
int strong(int);
void print(int,int);
int main()
{
	int u,l;
	cout<<"Enter lower limit = ";
	cin>>l;
	cout<<"Enter upper limit = ";
	cin>>u;
	print(u,l);
}int strong(int num)
{
	int l,fac,sum=0,og;
	og=num;
	while(num>0)
	{   fac=1;
		l=num%10;
	    for(int i=1;i<=l;i++)
	    {
	    	fac=fac*i;
		}
		sum=sum+fac;
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
		if(strong(low))
		cout<<low<<" ";
		low++;
	}
}


