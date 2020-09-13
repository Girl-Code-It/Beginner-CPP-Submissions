#include<iostream>
using namespace std;

int main()
{ 
    int i,j;
    for(i=0;i<=4;i++)
    {
    	for(j=0;j<=4-i;j++)
    	{
    		cout<<" ";
		}
		for(j=4;j>=4-i;j--)
    	{
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
