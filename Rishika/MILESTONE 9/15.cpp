//15
#include<iostream>
using namespace std;
int main()
{
	int i,j,k=6;
	for(i=1;i<=5;i++)
	{  
	    k=k-i;
		for(j=1;j<=5;j++)
		{
			if(j>=1&&j<=i)
			{
				cout<<k;
				k++;
			}else
			{
				cout<<"5";
			}
		}
		cout<<endl;
	}
}
