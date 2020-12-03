//problem-05-10.
#include<iostream>
using namespace std;
int fun(int x)
{
	if(x%2==0)
	{
		cout<<x<<" is an even number."<<endl;
	}
	else{
		cout<<x<<" is an odd number"<<endl;
	}
}
int main()
{
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	fun(x);
	
}
