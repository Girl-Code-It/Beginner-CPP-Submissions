#include<iostream>
using namespace std;
int main ()
{
int i, j, k ;
k=1;
for(i=1; i<=5 ; i++)
{ 
	for(j=1; j<=9; j++)
	{ 
		if(j>=6-i&& j<=4+i && k)
		{ k=0;
		cout<<"*";	
		}
		else
		{ k=1;
		cout<<" ";	
		}
	}
	cout<<"\n";
	}	
	
	return 0;
}
