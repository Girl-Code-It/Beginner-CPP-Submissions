//Q8-wap to find whether a number is even or odd using functions.
#include<iostream>
using namespace std;
eve(int x)
{
	if(x%2==0)
	cout<<"EVEN.";
	else
	cout<<"ODD.";
}int main()
{
	int n;
	cout<<"Enter a number = ";
	cin>>n;
	eve(n);
}
