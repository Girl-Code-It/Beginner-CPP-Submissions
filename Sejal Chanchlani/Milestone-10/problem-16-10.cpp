//problem-16-10
#include<iostream>
using namespace std;
void perfect(int a,int b)
{
	int sum;
	for(int i=b;i<=a;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
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
	perfect(a,b);
}
