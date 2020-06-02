/*Given a matrix where every element is either 1 or 0(zero), replace 0 with 1 if surrounded by 1. A 0 (or a set of 0s) is considered
 to be surrounded by 1 if there are 1 at locations just below, just above, just left and just right of it.*/
 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[3][3],i,j=0,n,m,k=0;
	
	cout<<"Enter the no. of rows and columns "<<endl;
	cin>>n;
	cout<<endl;
	cin>>m;
	cout<<endl<<"enter binary elements of array "<<endl;
	
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
    
    cout<<endl<<endl;
    
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0)
			{
				if(i==0||j==0||i==n-1||j==m-1)
				a[i][j]=0;
				else if(a[i-1][j]==1&&a[i+1][j]==1&&a[i][j+1]==1&&a[i][j-1]==1)
				a[i][j]=1;
				else
				continue;
			}
		}
	  cout<<endl;	
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
    
    getch();
    return 0;
    
}
