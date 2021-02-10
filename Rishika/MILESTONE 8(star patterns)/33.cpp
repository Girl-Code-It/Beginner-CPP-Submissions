//33
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{   k='A';
		for(j=1;j<=7;j++)
		{
			if(i>=2&&j>=6-i&&j<=2+i)
			{
				cout<<" ";
			}else
			{
				cout<<k;
			}
		k++;
		}
		cout<<endl;
	}
}
