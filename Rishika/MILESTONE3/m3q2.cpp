//q2- wap to print the sum of firs and last digit of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,f,l,s=0;
	cout<<"Enter a number -  ";
	cin>>n;
	l=n%10;
	f=n;
	while(f>10)
	{
		f=f/10;
	}
	s=l+f;
	cout<<"SUM= "<<s;
}
