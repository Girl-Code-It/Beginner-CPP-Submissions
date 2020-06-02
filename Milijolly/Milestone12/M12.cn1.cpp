//replace every element with sum of elements on right exculding currnt

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
    
    cout<<"Output is "<<endl;
    for(i=0;i<n;i++)
    {  j=0;
    	while(j!=m)
    	{
    		if(j==m-1)
    		cout<<" 0 ";
    		
			else
			{ sum=0;
			 for(k=j+1;k<m;k++)
			 {
			 	sum+=a[i][k];
			 }
    		cout<<sum<<" ";
    	    }
    	    
    	    j++;
    	}
    cout<<endl;	
    	
    }
 getch();
 return 0;
    
}
