//program to print even and odd elements 

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ 	int a[10],i,o=0,e=0;
    
    cout<<"Enter the 10  elements of an array "<<endl;
  	
	
	for(i=0;i<10;i++)
	 {
	    cin>>a[i];
	    
	    if(a[i]%2==0)
	    e++;
	    
	    else
		o++;    }
		  
	
		cout<<"EVEN numbers are "<<e<<" ;"<<" ODD numbers are "<<o;	

	getch();
	return 0;
	
}
