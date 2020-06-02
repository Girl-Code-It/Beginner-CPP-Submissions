//program to print array in reverse order

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],i,j;
	
	cout<<"Enter the 10 elements of an array "<<endl;
  	
	for(i=0;i<10;i++)
	  cin>>a[i]; 
	  
	cout<<"Array in reverse order "<<endl;
	 
	for(i=9;i>=0;i--)
	  cout<<a[i]<<" "; 

getch();
return 0;

}
