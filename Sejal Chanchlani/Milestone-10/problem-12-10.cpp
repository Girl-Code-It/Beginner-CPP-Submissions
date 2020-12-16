//problem-12-10
#include<iostream>
using namespace std;
void fun(int x,int y)
{
	if(x>y)
	{
		cout<<x<<" is greater than "<<y<<endl;
	}
	else
	{
		cout<<x<<" is less than "<<y<<endl;
	}
}
int main()
{
	int x,y;
	cout<<"enter first number"<<endl;
	cin>>x;
	cout<<"enter second number"<<endl;
	cin>>y;
	fun(x,y);
	
}
