#include<iostream>
using namespace std;
int main ()
{
int i, j ,N ;
cout<<"enter the number of rows:";
cin>>N;
for(i=1; i<=5 ; i++)
{
	for(j=1; j<=N; j++)
	{
		if(j>=i&& j<=4+i)
		{
		cout<<"*"	;
		}
		else
		{
		 cout<<" ";	
		}
	}
	cout<<"\n";
	}	
	
	return 0;
}
