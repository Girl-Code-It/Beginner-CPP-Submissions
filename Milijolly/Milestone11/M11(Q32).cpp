//Program to merge 2 arrays in third array 
#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],b[10],c[20],i,j;
	int n=10,m=10;
	
	cout<<"Enter the 10 elements of an array A "<<endl;
  	
	for(i=0;i<n;i++)
	    cin>>a[i];
	
	cout<<"Enter the 10 elements of an array B "<<endl;
		  
	for(i=0;i<m;i++)
	    cin>>b[i];	
	   
	for(i=0;i<n;i++)
	  c[i]=a[i];
	
	for(i=n,j=0;i<n+m,j<m;i++,j++) 
	  c[i]=b[j]; 
	
	cout<<"The elements of third array "<<endl;
	
	for(i=0;i<n+m;i++) 
	  cout<<c[i]<<" "; 
	  
	  
	  getch();
	  return 0;
	
}
	  
	  
	  

