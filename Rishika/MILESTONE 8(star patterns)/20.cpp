//20
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	char l;
	for(i=1;i<=4;i++)
	{   k=1;
	l='A';
		for(j=1;j<=4;j++)
		{
		    if(j>=5-i && j<=5)
			{
			    cout<<l;
				l++;	
			}else
			{
			    cout<<" ";	
			}	
		}
		for(j=5;j<=8;j++)
		{
			if(j>=5 && j<=4+i)
			{
				cout<<k;
				k++;
			}
		}
		cout<<endl;
	}
}
