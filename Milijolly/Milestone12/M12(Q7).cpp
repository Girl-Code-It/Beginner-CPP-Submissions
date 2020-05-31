//Write a program to multiply array A and B of order NxL and LxM

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{   int a[2][2],b[2][3],c[2][3],n,l,m;

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
	 
	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<l;j++)
	    cout<<a[i][j]<<" ";
	    cout<<endl;
	 }
	 cout<<endl;
	 
	 for(int i=0;i<l;i++)
	 {
	   for(int j=0;j<m;j++)
	    cout<<b[i][j]<<" ";
	    cout<<endl;
	 }
	 
	 cout<<endl;
	 cout<<"Multiplication of 2 arrays "<<endl;
	 
	 for(int i=0;i<n;i++)
	 { 
	   for(int j=0;j<m;j++)
	    {
	      c[i][j]=0;
	     for(int k=0;k<l;k++)
	   	   c[i][j]+=a[i][k]*b[k][j];
	    }
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	    cout<<c[i][j]<<" ";
	    
		cout<<endl;
	 }
	 
	 getch();
	 return 0;
	 
}
