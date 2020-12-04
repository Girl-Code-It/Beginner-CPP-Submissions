//problem-08-10
#include<iostream>
using namespace std;
int factorial(int x)
{
	int fact=1;
	while(x)
	{
		fact=fact*x;
		x--;
	}
	return fact;
}
int main()
{
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	cout<<"factorial of "<<x<<" is "<<factorial(x);
}
