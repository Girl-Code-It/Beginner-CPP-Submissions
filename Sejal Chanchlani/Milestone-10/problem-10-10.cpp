//problem-10-10
#include<iostream>
using namespace std;
int cube(int x)
{
	return x*x*x;
}
int main()
{
	int x;
	cout<<"enter x"<<endl;
	cin>>x;
	int n=cube(x);
	cout<<"cube of "<<x<<" is "<<n;
}
