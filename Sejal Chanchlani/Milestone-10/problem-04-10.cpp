//problem-04-10
#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
	if (x>y && x>z)
	{
		return x;
	}
	else if(y>x && y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
int min(int x,int y,int z)
{
	if (x<y && x<z)
	{
		return x;
	}
	else if(y<x && y<z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
int main()
{
	int x,y,z,g,h;
	cout<<"enter first number"<<endl;
	cin>>x;
		cout<<"enter second number"<<endl;
	cin>>y;
	cout<<"enter third number"<<endl;
	cin>>z;
	g=max(x,y,z);
	h=min(x,y,z);
	cout<<"Maximum = "<<g<<endl;
	cout<<"Minimum = "<<h<<endl;
}
