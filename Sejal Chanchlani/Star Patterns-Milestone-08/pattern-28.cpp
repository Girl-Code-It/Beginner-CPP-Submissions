//pattern-28
#include<iostream>
using namespace std;
int main()
{
	int n,m,k=0,p;
	
	cout<<"enter rows"<<endl;
	cin>>n;
	cout<<"enter columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			k=k+1;
		}
		else{
			k--;
			k=k+i;
		}
		p=k;
		for(int j=1;j<=m;j++)
		{
			if(j<=i*2-1)
			{
				if(j%2==0)
				{
					cout<<"*";
				}
				else{
			     if(i%2==0)
			     {
			     	cout<<p;
			     	p--;
				 }
				 else{
				 	cout<<p;
				 	k++;
				 	p++;
				 }
				}
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
