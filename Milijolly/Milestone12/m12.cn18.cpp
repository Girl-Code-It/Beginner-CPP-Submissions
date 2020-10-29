//indempotent matrix 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{   int a[3][3],b[3][3],c[3][3],n,l,m;

    cout<<"Enter dimensions of array A "<<endl;
    cin>>n>>l;
     
	cout<<"enter a array A "<<endl;
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<l;j++)
	   
	   	cin>>a[i][j];
	 }
	 
	 cout<<"Enter dimensions of array B "<<endl;
    cin>>l>>m;
	 
	 cout<<"enter a array B "<<endl;
	for(int i=0;i<l;i++)
	 {
	   for(int j=0;j<m;j++)
	   
	   	cin>>b[i][j];
	 }
	
	
	 cout<<endl;
	 //"Multiplication of 2 arrays "<<endl;
	 
	 for(int i=0;i<n;i++)
	 { 
	   for(int j=0;j<m;j++)
	    {
	      c[i][j]=0;
	     for(int k=0;k<l;k++)
	   	   c[i][j]+=a[i][k]*b[k][j];
	    }
	 }
	 int count=0;
	  for(int i=0;i<n;i++)
	 { 
	   for(int j=0;j<m;j++)
	    {
	      if(c[i][j]!=a[i][j])
	       count++;
	    }
	 }
	 
	if(count==0)
	cout<<"It is an indempotent matrix ";
	
	else
	cout<<"It is NOT indempotent matrix ";
	 
	 getch();
	 return 0;
	 
}
