//2
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(i<=j)
			{
				cout<<j;
			}
		}
		cout<<endl;
	}
}
