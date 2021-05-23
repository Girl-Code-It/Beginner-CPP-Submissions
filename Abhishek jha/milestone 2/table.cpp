#include<iostream>
using namespace std;
int main()
{
	int i=1,n,x=10;
	cout<<"enter the number of which table you want to see"<<endl;
	cin>>n;
	while(i<=x)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}
	return 0;
}
