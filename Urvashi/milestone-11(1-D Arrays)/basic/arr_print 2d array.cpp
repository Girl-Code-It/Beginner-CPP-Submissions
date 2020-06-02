#include<iostream>
using namespace std;

const int m=3 , n=3;

void array(int a[m][n])
{   
    int i,j;
	cout<<"enter the elements of the array:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];	
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];	
		}
	}
}

int main()
{ 
    int a[m][n];
	array(a);
}
