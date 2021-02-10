//I-Q1-wap to print the sum of two numbers entered by the user by defining your own function.
#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a,b,sum;
	cout<<"Enter two numbers whose sum needs to be calculated = "<<endl;
	cin>>a>>b;
	sum=add(a,b);
	cout<<"SUM = "<<sum;
}int add(int x,int y)
{
	return(x+y);
}

