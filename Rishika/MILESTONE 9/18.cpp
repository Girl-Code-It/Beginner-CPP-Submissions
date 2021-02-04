//18
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=9;i>=1;i=i-2)
	{
		for(j=1;j<=i;j=j+2)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
