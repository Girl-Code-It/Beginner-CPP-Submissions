//Program to print all Maximum and Minimum element in array

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ 	int a[10],i,max,min;
    
    cout<<"Enter the 10  elements of an array "<<endl;
  	max=a[0];min=a[0];
	for(i=0;i<10;i++)
	 {
	    cin>>a[i];
	    
	    if(a[i]>max)
	    max=a[i];
	    
	    if(a[i]<min)
	    min=a[i];    }
		  
	
		cout<<"max is "<<max<<" ;"<<" min is "<<min;	

	getch();
	return 0;
	
}
