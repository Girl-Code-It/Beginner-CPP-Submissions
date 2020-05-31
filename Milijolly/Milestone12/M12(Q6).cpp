//Write a program to add two array A and B of size m x n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{   int a[3][3],n=3,b[3][3],m=3,c[3][3];
     
	cout<<"enter a array A "<<endl;
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	   
	   	cin>>a[i][j];
	 }
	 
	 cout<<"enter a array B "<<endl;
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<m;j++)
	   
	   	cin>>b[i][j];
	 }
	 
	 if(m==n)
	 {
	 	for(int i=0;i<m;i++)
	    {
	      for(int j=0;j<m;j++)
	        c[i][j]=a[i][j]+b[i][j];
	    }
	 	
	 }
	 
	 else
	   cout<<"addition not possible "<<endl;
	   
	   cout<<"ARRAY ON ADDITION ON THE 2 ARRAYS "<<endl;
	   
	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	    cout<<c[i][j]<<" ";
	    cout<<endl;
	 }  
	   
	   
	 getch();
	 return 0;
}
