//1
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{   k=1;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				cout<<k;
				k++;
			}
		}
		cout<<endl;
	}
}
