//Program to find second max

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ 	int a[10],i,max,max2;
    
    cout<<"Enter the 10  elements of an array "<<endl;
  	max=a[0];  max2=a[0];
	
	for(i=0;i<10;i++)
	 {
	    cin>>a[i];
	    
	    if(a[i]>max)
	    max=a[i];   }
		  
	for(i=0;i<10;i++)
	 {
	    if(a[i]>max2&&max!=a[i])
	    max2=a[i];   }
		  
		  cout<<"max is "<<max<<"  second max is "<<max2;
		

	getch();
	return 0;
	
}


