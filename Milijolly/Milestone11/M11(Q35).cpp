//program to search an element in array 

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{   int a[10],i,k,flag=0,num;
	
	cout<<"Enter the elments of array "<<endl;
	for( i=0;i<10;i++)
	    cin>>a[i];
	 
	 cout<<"Enter the elment to search in the  array "<<endl;
      cin>>num;   
	 
	 
	 for(i=0;i<10;i++) 
	 {
	 	if(a[i]==num)
	 	{
	 	  flag++;
		   k=i;
		    
	    }
	 }  
     k++;
	if(flag==0)
	cout<<"the number is not present "<<endl;
	
	else
	cout<<num<<" is present in array at "<<k<<"position ";
	
	
	getch();
	return 0;
}
