 //pattern-20
#include<iostream>
using namespace std;
int main()
{
	int n,k,m,x;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	cout<<"Enter no of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=65;
		x=1;
		for(int j=1;j<=m;j++)
		{
			if(j>=(n+1)-i && j<=n+i)
			{
				if(j<=m/2)
				{
					cout<<(char)(k);
					k++;
				}
				else{
					cout<<x;
					x++;
				}
			}
			else{
				cout<<" ";
			}		}
		cout<<endl;
	}
}
