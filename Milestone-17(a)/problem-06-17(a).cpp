#include<iostream>
using namespace std;
int sum=0;
int sum_of_digits(int n)
{
	if(n==0)
	{
		return 0;
		
	}
	return n%10+sum_of_digits(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<"sum of digits- "<<sum_of_digits(n);
}
