//sum of right and left diagonal 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{
 int a[3][3],m=3,n=3,suml=0,sumr=0;
  
  cout<< "Enter a 2D array"<<endl;
	for(int i=0;i<m;i++)
	 { 
	   for(int j=0;j<n;j++)
	    cin>>a[i][j];
	 }

 
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	   { 
	      if(i==j)
	      suml+=a[i][j];
	                                                     
	      if(i+j==n-1)                                     
	      sumr+=a[i][j];                                   
	   }
	 }

   for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	   cout<<a[i][j]<<" ";
	   cout<<endl;
	 }
 cout<<"Sum of left diagonal  "<<suml<<endl;
 cout<<"Sum of right diagonal  "<<sumr<<endl;
 
 getch();
 return 0;
 
}
