//Q12- print the factorial of a number by defining a function.
#include<iostream>
using namespace std;
factorial(int x)
{   int fact=1;
    if(x==1)
    fact=1;
    if(x==0)
    fact=0;
    else
	for(int i=1;i<=x;i++)
	{
	    fact=fact*i;
	}
	cout<<"Factorial of "<<x<<" is = "<<x<<"! = "<<fact;
}int main()
{
	int n;
	cout<<"Enter a number = ";
	cin>>n;
	factorial(n);
}
