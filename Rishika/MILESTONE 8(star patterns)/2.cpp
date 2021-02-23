//2
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(j=0;j<=5;j++)
	{
		for(i=0;i<=5;i++)
		{
			if(j<=i)
			{
				cout<<" ";
			}else
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
}
