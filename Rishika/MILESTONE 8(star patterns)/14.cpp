//14
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=6;i>=0;i--)
	{
		k=i;
		for(j=6;j>=0;j--)
		{
			if(j<=i)
			{
				cout<<k;
				k--;
			}
		}
		k--;
		cout<<endl;
	}
}
