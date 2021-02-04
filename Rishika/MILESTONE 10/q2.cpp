//I-Q2- define a function that returns the product of two numbers entered by the user.
#include<iostream>
using namespace std;
int mult(int,int);
int main()
{
	int a,b,prod;
	cout<<"Enter two numbers to be multiplied = ";
	cin>>a>>b;
	prod=mult(a,b);
	cout<<"PRODUCT = "<<prod;
}int mult (int x,int y)
{
	return(x*y);
}
