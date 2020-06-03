//user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void Upperhalf(int A[3][3],int N)
{
	for(int i=0;i<N;i++)
	 {
	   for(int j=0;j<N;j++)
	    cout<<A[i][j]<<" ";
	    cout<<endl;
	 }
	
	
	cout<<endl<<" UPPER HALF IS "<<endl;
	for(int i=0;i<N;i++)
	 {
	   for(int j=0;j<N;j++)
	   
	   	{
	   	  if(j>i||j==i)
	   	  cout<<A[i][j]<<" ";
	    }
	    cout<<endl;
	 }
}


int main()
{   int a[3][3],n=3;
     
	cout<<"enter a 2D array "<<endl;
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	   
	   	cin>>a[i][j];
	 }
	Upperhalf(a,n);

 getch();
 return 0;
 
}
