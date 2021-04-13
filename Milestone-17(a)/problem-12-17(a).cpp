#include<iostream>
using namespace std;
int count=0;
bool prime(int ind,int n)
{
	if(ind<n)
	{
		if(n%ind==0)
		{
			count=1;
			return false;
		}
		prime(ind+1,n);
	}
	return true;
}
int main()
{
	int n;
	cout<<"enter number - ";
	cin>>n;
	prime(2,n);
	if (count==0)
	{
		cout<<"prime number"<<endl;
	}
	else
	{
		cout<<"not a prime number "<<endl;
	}
}
