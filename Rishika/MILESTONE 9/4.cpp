//4
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{   k=0;
	k=k+i;
		for(j=1;j<=5;j++)
		{
			if(j<=6-i)
			{
				cout<<k;
				k++;
			}
		}
		cout<<endl;
	}
}
