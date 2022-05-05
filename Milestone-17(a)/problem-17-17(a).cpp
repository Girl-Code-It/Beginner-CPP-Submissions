#include<iostream>
using namespace std;
int pow(int x,int p)
{
	if(p==0)
	{
		return 0;
	}
	else if(p==1)
	{
		return x;
	}
	else
	{
		if(p%2==0)
		{
			int y=pow(x,p/2);
			return y*y;
		}
		else
		return pow(x,p-1);
	}
}
int main()
{
	int x,p;
	cout<<"enter number whose power needs to be calculated"<<endl;
	cin>>x;
	cout<<"enter power - ";
	cin>>p;
	cout<<"ans- "<<pow(x,p);
}
