//program to sort array elements in ascending order

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],i,j,temp;
	
	cout<<"Enter the 10 elements of an array "<<endl;
  	
	for(i=0;i<10;i++)
	  cin>>a[i]; 
	  
	cout<<"Array sorted in ascending order "<<endl;
	 int n=10;
	for(i=0;i<n-1;i++)
	 {
	   for(j=0;j<n-1-i;j++)
	   {
	  	  if(a[j]>a[j+1])
	  	  {
	  	  	temp=a[j];
	  	  	a[j]=a[j+1];
	  	  	a[j+1]=temp;
	  	  }
	   } 
     }
     
     for(i=0;i<10;i++)
     cout<<a[i]<<" ";
     
getch();
return 0;

}
