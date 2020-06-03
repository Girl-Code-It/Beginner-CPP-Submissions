//Given an N*M 2D integer array, write a method that read rows of the matrix alternatively from left to right and right to left and return them as a 1 dimensional array.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[3][3],b[9],i,j=0,n,m,k=0;
	
	cout<<"Enter the no. of rows and columns "<<endl;
	cin>>n;
	cout<<endl;
	cin>>m;
	cout<<endl<<"enter elements of array "<<endl;
	
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
	{ j=0;
		if(i%2==0)
		{ 
		  while(j!=m)
		  {
		   b[k]=a[i][j];
		   j++;k++;
		  }
	    }
		else
		{
		  j=m-1;
		  while(j>-1)
		  {
		   b[k]=a[i][j];
		   j--;k++;
		  }
			
		}	
    }
    
    cout<<"NEW 1D array formed is "<<endl;
    for(i=0;i<n*m;i++)
	  cout<<b[i]<<" ";
	  
	  
  getch();
  return 0;
  
}
