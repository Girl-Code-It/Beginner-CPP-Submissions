#include<iostream>
using namespace std;
int main()
{
	int a=0,n,m=0;
	cout<<"enter the numberupto which even numbers have to be added"<<endl;
	cin>>n;
	while(a<=n)
	{
		if(a%2==0)
		m=m+a;
		a++;
	}
	cout<<m<<endl;
	return 0;
}
