//11
#include<iostream>
using namespace std;
int main()
{
	int i,j,k=9,p;
	for(i=1;i<=4;i++)
	{   k--;
	    p=1;
		for(j=1;j<=7;j++)
		{
			if(i+j<=k)
			{
				cout<<p;
				p++;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
