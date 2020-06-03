/*Given a MXN matrix where every row is sorted in increasing order. 
Write a function that finds and returns a common element in all rows. If there is no common element, then returns -1 */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void commelement(int b[3][3],int p,int q)
{  int temp,i=0,count=0;
     
      	for(int j=0;j<q;j++)
      	{ temp=b[i][j];
      	   for(int k=i+1;k<p;k++)
      	   {
      	   	for(int l=0;l<q;l++)
      	   	{
      	   	    if(b[k][l]==temp)
				{
				 count++;
				 break;
			    }
      	   	}
      	   }
      	   if(count==p-1)
      	   cout<<"common elemnt is "<<temp;
      	}
      
   
}

int main()
{  int a[3][3];int i,j,n,m;
   
   cout<<"enter the rows and columns"<<endl;
   cin>>m;
   cout<<endl;
   cin>>n;
   
   cout<<"Enter the 2D array "<<endl;
   for(i=0;i<m;i++)
   {  for(j=0;j<n;j++)
       {
       	cin>>a[i][j];
       }
   }
   cout<<endl<<endl;
   
   cout<<"Array elements are "<<endl;
   for(i=0;i<m;i++)
   {  for(j=0;j<n;j++)
       {
       	cout<<a[i][j]<<" ";
       }
   	cout<<endl;
   }
   
   commelement(a,m,n);
   
   getch();
   return 0;
   
}
