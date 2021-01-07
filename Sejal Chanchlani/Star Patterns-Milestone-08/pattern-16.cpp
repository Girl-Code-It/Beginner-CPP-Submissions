//Pattern-16
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of rows and columns"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==i || j==(n+1)-i)
			{
				if(j==i && j!=n/2+1)
				{
					cout<<"\\";
				}
				else{
					cout<<"/";
				}
		}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

