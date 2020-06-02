//number pattern 11

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,m;
   cout<<"enter the number of rows  ";
   cin>>n;
    m=2*n-1;
   for(int i=m;i>=1;i=i-2)
   {  
      for(int j=1;j<=i;j++)
      { 
      	cout<<j;
      }
      
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
