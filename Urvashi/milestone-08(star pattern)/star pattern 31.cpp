#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int i, j, n  ;
char name[50];
int len;
cout<<"enter the name";
cin>>name;
cout<<name;
for(i=0; i<=2 ; i++)
{
	for(j=1; j<=17; j++)
	{
		if((j>=3-i && j<=6+i) || (j>=12-i && j<=15+i))
		cout<<"*";
		else
        cout<<" ";
}	cout<<"\n";

	}	
	for(i=0;i<9;i++)
	{
		for(j=1;j<=17;j++)
		{
			if(j>=i+1 && j<=17-i)
			cout<<"*";
			else
			cout<<" ";
		}	cout<<"\n";
			}
	return 0;
}
