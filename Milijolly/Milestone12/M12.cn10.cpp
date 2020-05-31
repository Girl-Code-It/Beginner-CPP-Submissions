//Given an n x n square matrix, print sum of all sub-squares of size k x k where k is smaller than or equal to n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[4][4],sum=0;
	int i,j=0,n,m,k=0,l=0,r,c,p;
	
	cout<<"Enter the no. of rows "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter size of submatrix "<<endl;
	cin>>k;
	cout<<endl;
	
	cout<<"enter array elements "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
	cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    cout<<"sum of submatrix are "<<endl;
     for(i=0;i<k;i++)
	{  sum=0;
		for(j=0;j<k;j++)
		{
			for(l=i;l<k+i;l++)
				for(p=j;p<k+j;p++)
					sum+=a[l][p];
			
			cout<<sum<<" ";
		}
	  cout<<endl;
	  	
    }
    
    
	getch();
	return 0;
	
}
	
	
