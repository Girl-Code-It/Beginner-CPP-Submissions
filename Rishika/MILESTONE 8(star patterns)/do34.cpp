//34
#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,p=5;
	for(i=1;i<=5;i++)
	{   
		for(j=1;j<=9;j++)
		{
			if(j<=i)
			{
				cout<<k;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
		k=k+p;
		p--;
	}
}
