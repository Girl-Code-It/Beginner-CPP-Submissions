#include<iostream>
using namespace std;

int main()
{ 
    int i,j,n;
    for(i=0;i<=4;i++)
    {
    	for(j=4;j>=i;j--)
    	{
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
