#include<iostream>
using namespace std;
int main()
{
	int n, i=1, sum=0;
	cin>>n;
	
	for( i=1; i<=n; i++)
	{
		if(i%2 ==0)
		{
			sum += i;
		}
	}
	
	cout<<"The sum of all even numbers between first "<< n << "natural numbers: "<<sum;
	return 0;
}
