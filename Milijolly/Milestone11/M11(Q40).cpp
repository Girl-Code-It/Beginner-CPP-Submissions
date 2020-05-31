//array without duplicate elements 

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],i,j,k;
	int n=10;
	
	cout<<"Enter the 10 elements of an array A "<<endl;
  	
	for(i=0;i<n;i++)
	    cin>>a[i];
	

		  
	for(i=0;i<n;i++)
	{   for(j=i+1;j<n;j++)
	     {
	     	if(a[i]==a[j])
	     	{
	     		for(k=j;k<n;k++)
	     		  a[k]=a[k+1];
	     		  
	     		 n--; 
	     	}
	     }
	}    	
	   
	
	
	
	cout<<"Array without duplicate elements is "<<endl;
	
	for(i=0;i<n;i++) 
	  cout<<a[i]<<" "; 
	  
	  
	  getch();
	  return 0;
	
}
	  
