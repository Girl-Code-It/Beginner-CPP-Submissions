//insert an element at specified position

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[6],i,k,num,temp,n=5;
	
	cout<<"Enter the 5 elements of an array "<<endl;
  	
	for(i=0;i<5;i++)
	  cin>>a[i];  
	  
	cout<<"Enter the position in which you want to insert element  "<<endl;
	cin>>k; 
	cout<<"Enter the value of the element "<<endl;
	cin>>num;
	
	
	for(i=5;i>k-1;i--)
	{   
	  a[i]=a[i-1];
	  
    }
    
    a[k-1]=num;
    
	for(i=0;i<6;i++)
    cout<<a[i]<<" ";
	  
	  getch();
	  return 0;
	  
	  
	  
}
