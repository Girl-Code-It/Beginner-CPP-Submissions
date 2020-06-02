//prgram to print rows in reverse order 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[3][3],i,j,r=0,n,m,sum,k;
	
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
    
    cout<<"array elements of row in reverse order "<<endl;
    
    for(i=0;i<n;i++)
    {
    	for(j=m-1;j>=0;j--)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
    
    
    getch();
    return 0;
    
}
