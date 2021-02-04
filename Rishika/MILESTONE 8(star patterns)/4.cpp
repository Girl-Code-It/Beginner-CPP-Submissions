//4
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=5;j>=0;j--)
		{
			if(j>=i)
			{
				cout<<"*";
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
