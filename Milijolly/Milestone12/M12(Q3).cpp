//user defined function to display multiplication of row element of 2D array A[4][6] containing integers 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{
 int a[4][6],prod,i,j;
  
  cout<< "Enter a 2D array"<<endl;
	for(i=0;i<4;i++)
	 { 
	   for(j=0;j<6;j++)
	    cin>>a[i][j];
	 }

  for(i=0;i<4;i++)
   {  
      prod=1;
      for(j=0;j<6;j++)
      {
       prod*=a[i][j];}
     cout<<"multiplication of row "<<i+1<<" is "<<prod<<endl;
	 
   }
   
   getch();
   return 0;
   
 }
