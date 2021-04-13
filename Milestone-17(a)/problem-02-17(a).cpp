#include<iostream>
using namespace std;
int add(int n)
{
	int sum=0;
	if(n==1 || n==0)
	{
		return n;
	}
//	add(n-1);
	sum=n+add(n-1);
	return sum;
}
int main()
{
	int n;
	cout<<"enter n-"<<endl;
	cin>>n;
	int x=add(n);
	cout<<"addition- "<<x;
}
