//pattern-29
#include<iostream>
using namespace std;
int main()
{
	int n,k=64,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=k+i;
		p=k;
		for(int j=1;j<=n;j++)
		{
			if(j>=(n+1)-i)
			{
				cout<<(char)(p);
				p--;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
