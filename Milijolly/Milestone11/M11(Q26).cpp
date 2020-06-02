//copy all elements from an array to another 

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[5],b[5],i;
	
	cout<<"Enter the 5 elements of an array "<<endl;
  	
	for(i=0;i<5;i++)
	  {
	    cin>>a[i];
		b[i]=a[i];  
		
	  }
	  
	cout<<"Second array is "<<endl; 
	for(i=0;i<5;i++)
	  cout<<b[i]<<" ";
	  
	  getch();
	  return 0;
	  
	  
	  
}
