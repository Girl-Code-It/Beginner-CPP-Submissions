//num-pattern-05
#include<iostream>
using namespace std;
int main()
{
	int n,k,p;
	cout<<"enter n"<<endl;
	cin>>n;
	k=n;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=n;j++)
		{
			if(j<=(n+1)-i)
			{
				cout<<p<<" ";
				p--;
			}
			else{
				cout<<" ";
			}
			
		}
		
		cout<<endl;
		k--;
	}
}
