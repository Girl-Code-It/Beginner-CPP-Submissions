// program to print spiral 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{
	int a[4][4],i,j,r=0,n;
	
	cout<<"Enter the no. of rows "<<endl;
	cin>>n;
	cout<<endl<<"enter elements of array "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
	
	cout<<"Spiral elements are "<<endl;
	
	int num=0,rt=n-1,lt=0,tp=0,dw=n-1;
	
	
  while(tp<dw&&rt>lt)	
  {
  	if(num==0)
	{ 
        for(i=lt;i<=rt;i++)
	    {
	     cout<<a[tp][i]<<" ";
	     
	    }
	tp++;
	num=1;
    }
	
	
	if(num=1)
	{
		for(i=tp;i<=dw;i++)
		{
		  cout<<a[i][rt]<<" ";	
		}
	rt--;
	num=2;	
	}
				
    
	if(num=2)
	{
		for(i=rt;i>=lt;i--)
		{
		  cout<<a[dw][i]<<" ";	
		}
	dw--;
	num=3;	
	}
	
	if(num=3)
	{
		for(i=dw;i>=tp;i--)
		{
		  cout<<a[i][lt]<<" ";	
		}
	lt++;
	num=0;	
	}
			
  }
		

	
getch();
return 0;	
}
