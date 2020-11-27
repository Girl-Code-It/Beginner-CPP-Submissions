//pattern-23
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
