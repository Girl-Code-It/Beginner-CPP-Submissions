//Given a 2D matrix, print all elements of the given matrix in diagonal order.

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
    
    cout<<endl<<endl;
    i=0;j=0;
    
	for(int k=0;k<2*n-1; k++)
    {  
	   if(k<n) 
	   {
          i=k;
          j= 0;
       }
       else 
	   {
         i=k-1;
         j=(k+1)%n;
       }

       while(i>=0&&j<n)
       {
          cout <<" "<< a[i][j];
          i--;
         j++;
       }
       cout<<endl;
   }

    getch();
    return 0;
    
}
    
    
