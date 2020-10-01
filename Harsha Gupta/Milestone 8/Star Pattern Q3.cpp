#include<iostream>
using namespace std;

int main()
{ 
    int i,j;
    for(i=0;i<=4;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		cout<<" ";
		}
		for(j=4;j>=i;j--)
    	{
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
