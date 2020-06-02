/*Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user.
 Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs. */
 
 #include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ int i,a[100],num,max,min,min2;

 cout<<"Enter the size of the array "<<endl;
 cin>>num;
 cout<<"Enter "<<num<<" elements "<<endl;
 for(i=0;i<num;i++)	
    cin>>a[i];
    
 max=a[0]; min=a[0]; min2=a[0];
 for(i=0;i<num;i++)  
 {
 	 if(max<a[i])
 	  max=a[i];
 	
	 if(min>a[i])
 	  min=a[i];  
 	  	 
 }
  for(i=0;i<num;i++)
  {
  	if(a[i]!=min)
  	{  if(min2>a[i])
 	     min2=a[i];
  	}
  	
  }  
 
 cout<<max<<" and "<<min<<" are pairs of max difference "<<endl;  
 cout<<min2<<" and "<<min<<" are pairs of min difference "<<endl; 
 
 getch();
 return 0;
}
  
