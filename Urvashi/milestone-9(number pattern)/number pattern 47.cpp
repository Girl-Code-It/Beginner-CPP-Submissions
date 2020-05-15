#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i, j, m , noc,k;
	noc=1;
	k=1;
	cout<<"enter the rows:";
	cin>>m;
	for(i=1;i<=m;i++)
	{ 
		for(j=1;j<=noc;j++)
		{
			while(k==10)
			k=1;
		
				cout<<k;
				k++;   
			
		}
		cout<<"\n";
		noc*=2;
	}

}
