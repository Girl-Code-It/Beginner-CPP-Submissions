//prac1-function with no return type but argument
#include<iostream>
using namespace std;
void add (int,int);
int main()
{
	int a,b;
	cout<<"enter two numbers- ";
	cin>>a>>b;
	add(a,b);
}void add(int x,int y)
{
	int c;
	c=x+y;
	cout<<"sum = "<<c;
}
