//program to print even and odd elements in 2 different arrays

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],even[10],odd[10],i,j=0,k=0;
	
	cout<<"Enter the 10 elements of an array "<<endl;
  	
	for(i=0;i<10;i++)
	 { 
	  cin>>a[i]; 
	  
	  if(a[i]%2==0)
	   {
	     even[j]=a[i];
	     j++;     }
	   
	   else
	   { 
	     odd[k]=a[i];
	     k++;
	   }  
     }
	cout<<"Array with even elements "<<endl;
	
	for(i=0;i<j;i++)
	  cout<<even[i]<<" ";
	 
	 cout<<endl;
	cout<<"Array with even elements "<<endl;
	
	for(i=0;i<k;i++)
	  cout<<odd[i]<<" ";

getch();
return 0;

}
