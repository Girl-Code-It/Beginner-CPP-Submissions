//pattern-34
#include<iostream>
using namespace std;
int main()
{
	int n,k=1,p;
	cout<<"Enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=i;j++)
		{
		     cout<<p;
		     p=p-(n+j-i);
		}
		k=k+n+1-i;
		cout<<endl;
		
	}
}
