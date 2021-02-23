//16
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i || j==8-i)
			{
				if(j==i)
				{
					cout<<"\\";
				}else
				{
					cout<<"/";
				}
			}else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
