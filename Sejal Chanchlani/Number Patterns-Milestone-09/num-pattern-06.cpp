//num-pattern-06
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
		k=n;
		for(int j=1;j<=n;j++)
		{
			if(j<=(n+1)-i)
			{
				cout<<k<<" ";
				k--;
			}
			else{
				cout<<" ";
			}
			
		}
		
		cout<<endl;
	}
}
