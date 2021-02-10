//Q16- wap to print all perfect numbers between a given interval.
#include<iostream>
#include<math.h>
using namespace std;
int perf(int);
void print(int,int);
int main()
{
	int u,l;
	cout<<"Enter the lower limit = ";
	cin>>l;
	cout<<"Enter the upper limit = ";
	cin>>u;
	print(u,l);
}void print(int up,int low)
{
	while(low<=up)
	{
		if(perf(low))
		cout<<low<<" ";
		low++;
	}
}int perf(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(num==sum)
	return 1;
	else
	return 0;
}
