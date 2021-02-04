//9
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
			if(j>=6-i && j<=2+i)
			{
				cout<<" ";
			}else
			{
				cout<<k;
				if(j<4)
				{
					k++;
				}else if(j>=4)
				{
					k--;
				}
			}
		}
		cout<<endl;
	}
	
}
