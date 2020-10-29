//program to print row number that has maximum 1s in a boolean n*m matrix 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[3][3],b[3],i,j,n,m,max,count=0,k;
	
	cout<<"Enter the no. of rows and columns "<<endl;
	cin>>n;
	cout<<endl;
	cin>>m;
	cout<<endl<<"enter boolean elements of array "<<endl;
	
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
    {   count=0;
    	for(j=0;j<m;j++)
    	{
    	    if(a[i][j]==1)
    	    count++;
    		
    	}
    	
    	b[i]=count;
    }
    
    
    max=b[0];
    for(i=0;i<n;i++)
    {
    	if(max<b[i])
    	{
    	 max=b[i];
    	 k=i;}
    	 
    }
    
    cout<<"row with maximum 1s "<<k+1<<"th row and has index "<<k;
    
    
    getch();
    return 0;
    
}
