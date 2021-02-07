//17
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{   k=1;
	l=2;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				if(i%2!=0)
				{
					cout<<k;
					k=k+2;
				}else
				{
					cout<<l;
					l=l+2;
				}
			}
		}
		cout<<endl;
	}
}
