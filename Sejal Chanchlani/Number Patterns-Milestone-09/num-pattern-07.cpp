//num-pattern-07
#include<iostream>
using namespace std;
int main()
{
	int n,k,p;
	cout<<"enetr rows"<<endl;
	cin>>n;
	k=1;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=i;j++)
		{
			cout<<p<<" ";
			p--;
		}
		k++;
		cout<<endl;
	}
}
