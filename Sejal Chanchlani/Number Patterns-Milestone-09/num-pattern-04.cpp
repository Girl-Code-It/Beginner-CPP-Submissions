//num-pattern-04
#include<iostream>
using namespace std;
int main()
{
	int n,k=1,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=n;j++)
		{
			if(j<=(n+1)-i)
			{
				cout<<p<<" ";
				p++;
			}
			else{
				cout<<" ";
			}
		
		}
			k++;
		cout<<endl;
	}
}
