// function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column(square matrix)

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{   int a[3][3],n=3;
     
	cout<<"enter a 2D array "<<endl;
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	   
	   	cin>>a[i][j];
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;
	 }
	 cout<<endl<<endl;
	
	cout<<"column elements are ";
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	    
	    {
	    if(2*j-1==n)
	    cout<<a[i][j]<<" ";
	    
	    }
	 }
	cout<<endl;
	cout<<"Row elements are ";
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<n;j++)
	    
	    {
	    if(2*i-1==n)
	    cout<<a[i][j]<<" ";
	    
	    }
	 }
	

 getch();
 return 5;
 
}
