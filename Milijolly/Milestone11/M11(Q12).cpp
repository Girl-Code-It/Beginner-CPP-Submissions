//Write a program to print sum, average of all numbers, smallest and largest element of an array. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10],max,min,sum=0,avg,i,j;

 cout<<"Enter 10 intergers "<<endl;
  
 for(int i=0;i<10;i++)	
    cin>>a[i];
    
 max=a[0]; min=a[0];
 for(i=0;i<10;i++)  
 {
 	if(max<a[i])
 	  max=a[i];
 	
	 if(min>a[i])
 	  min=a[i]; 
	   
	sum+=a[i];    }
	
	avg=sum/10;
 
 cout<<"Largest is "<<max<<endl;
 cout<<"Smallest is "<<min<<endl;
 cout<<"Sum is "<<sum<<endl;
 cout<<"Average is "<<avg<<endl;
 
 getch();
 return 0;
}
