//Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{
	int a[3][3],i,j=0,n,m,ki,kj;
	
	cout<<"Enter the no. of rows and columns "<<endl;
	cin>>n;
	cout<<endl;
	cin>>m;
	cout<<endl<<"Enter binary elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
		
    }
    cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    
     for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		   if(a[i][j]==0)
		   {
		   	ki=i;kj=j;
		   }
		}

    }
    i=0;
    while(i!=n)
    {
    	a[i][kj]=0;
    	i++;
    }
    j=0;
    while(j!=m)
    {
    	a[ki][j]=0;
    	j++;
    }

    cout<<endl<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    
    getch();
    return 0;
    
}
