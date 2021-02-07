//29
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=5;i++)
	{  
		for(j=5;j>=1;j--)
		{
			if(j<=6-i)
			{
				cout<<k;
				k--;

			}else
			{
				cout<<" ";
			}
		}
		k=k+i;
		cout<<endl;
    }
}
