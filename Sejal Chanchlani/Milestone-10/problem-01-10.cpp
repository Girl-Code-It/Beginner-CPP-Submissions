//Problem-01-10
#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int x,y;
	cout<<"enter first number"<<endl;
	cin>>x;
	cout<<"enter second number"<<endl;
	cin>>y;
	int z=add(x,y);
	cout<<"addition of two numbers is "<<z<<"."<<endl;
	
}
