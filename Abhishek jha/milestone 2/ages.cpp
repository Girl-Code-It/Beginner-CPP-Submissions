#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3;
	cout<<"enter the ages of three people respectively"<<endl;
	cin>>a1;
	cin>>a2;
	cin>>a3;
	if(a1>a2)
	{
		if(a2>=a3)
		{cout<<"oldest"<<a1<<"youngest"<<a3;
		}
		if(a1>a3)
		{
			if(a2<=a3)
			cout<<"oldest"<<a1<<"youngest"<<a2;
		}
	}
	if(a2>a1)
	{
		if(a1>=a3)
		{cout<<"oldest"<<a2<<"youngest"<<a3;
		}
		if(a1<a3)
		{
			if(a2>=a3)
			cout<<"oldest"<<a2<<"youngest"<<a1;
		}
	}
	if(a3>a1)
	{
		if(a1>=a2)
		{cout<<"oldest"<<a3<<"youngest"<<a2;
		}
		if(a1<a2)
		{
			if(a3>=a1)
			{cout<<"oldest"<<a3<<"youngest"<<a1;
			}
		}
	}
	if(a1==a2)
	{
		if(a2==a3)
		cout<<"all three are equal";
	}
	return 0;
	}
