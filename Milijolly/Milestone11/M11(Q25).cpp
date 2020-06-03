///Program to print all negative elements in array

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ 	int a[10],i,count=0;
    
    cout<<"Enter the 10  elements of an array "<<endl;
  	
	for(i=0;i<10;i++)
	    cin>>a[i];
		cout<<endl;  
		
	for(i=0;i<10;i++)
	{   
	    if(a[i]<0)
		count++;	
    }
    cout<<"no of negative elments are "<<count;
	getch();
	return 0;
	
}
