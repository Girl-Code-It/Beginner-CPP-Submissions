//problem-15-10
#include<iostream>
using namespace std;
void armstrong(int a,int b)
{
	int sum=0,r,temp;
	for(int i=b;i<a;i++)
	{
		temp=i;
		while(temp)
		{
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(i==sum)
		{
			cout<<i<<endl;
		}
		sum=0;
	}
}
int main()
{
	int a,b;
	cout<<"enter upper limit"<<endl;
	cin>>a;
	cout<<"enter lower limit"<<endl;
	cin>>b;
	armstrong(a,b);
}
