#include<iostream>
using namespace std;
int main()
{
	int a=0,m=0,n;
	cout<<"enter the number upto which od numbers have to add"<<endl;
	cin>>n;
	while(a<=n)
	{
		if(a%2!=0)
		m+=a;
		a++;
	}
	cout<<m;
	return 0;
}
