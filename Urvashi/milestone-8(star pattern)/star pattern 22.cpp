#include<iostream>
using namespace std;
int main ()
{
int i, j, N ;
cout<<"enter the number of rows:";
cin>>N;
for(i=1; i<=N ; i++)
{
	for(j=1; j<=5; j++)
	{
		if(i>=6-j&&i<=4+j)
		{
		cout<<"*";	
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
