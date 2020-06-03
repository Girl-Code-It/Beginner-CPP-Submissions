//given an integer 2D matrix (of size n x 3), you need to find the smallest sum possible while taking one element from each row. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	int a[3][3],i,j,n,min,sum=0,k;
	
	cout<<"Enter the no. of rows of matrix n* 3 "<<endl;
	cin>>n;
	cout<<endl<<"enter elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		
    }
    cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    
	k=0;
    for(i=0;i<n;i++)
	{   min=a[i][0]; 
		for(j=0;j<3;j++)
		{   
		
              if(i==0)
              { if(min>a[i][j])
                 {
                  min=a[i][j];
                  k=j;
                 }

              }
             else
             {
              if(k!=j&&min>a[i][j])
              {
               min=a[i][j];
               k=j;
              }
             }
            }
		

	  	cout<<min;
    }
    
    //cout<<"mininmum sum is "<<sum;
    
    getch();
    return 0;
    
}
