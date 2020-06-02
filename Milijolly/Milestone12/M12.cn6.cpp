/*Given a two dimensional n*m array, print the array in a sine wave order. 
i.e. print the first column top to bottom, next column bottom to top and so on.*/

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

   
    for(j=0;j<n;j++)
	{ i=0;
		if(j%2==0)
		{ 
		  while(i!=n)
		  {
		   b[k]=a[i][j];
		   i++;k++;
		  }
	    }
		else
		{
		  i=n-1;
		  while(i>-1)
		  {
		   b[k]=a[i][j];
		   i--;k++;
		  }
			
		}	
    }
    
    cout<<"NEW 1D array formed is "<<endl;
    for(i=0;i<n*m;i++)
	  cout<<b[i]<<" ";
	  
	  
  getch();
  return 0;
  
}
