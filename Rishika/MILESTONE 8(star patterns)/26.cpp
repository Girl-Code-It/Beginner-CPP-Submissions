//26
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{   k='@';
	    k=k+i;
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			{
				cout<<k;
				k--;
			}else
			{
				cout<<" ";
			}
	    }
		cout<<endl;
	}
}
