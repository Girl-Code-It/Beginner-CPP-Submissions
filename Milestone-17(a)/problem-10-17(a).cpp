#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0 ||n==1)
	{
		return n;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	cout<<"enter number - "<<endl;
	cin>>n;
	cout<<"factorial of "<<n<<" is "<<fact(n);
}
