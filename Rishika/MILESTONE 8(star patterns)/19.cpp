//19
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
			if(j>=5-i&& j<=3+i)
			{  	cout<<k;
				if(j<4)
				{
					k++;
				}else if(j>=4)
				{
					k--;
				}
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
