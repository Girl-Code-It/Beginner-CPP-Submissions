//23
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{   k=1;
		for(j=1;j<=6;j++)
		{
			if(j>=1 && j<=i)
			{
				cout<<k;
				k=1-k;				
			}else
			{
				cout<<" ";
			}
	    }
	    cout<<endl;
	}
}
