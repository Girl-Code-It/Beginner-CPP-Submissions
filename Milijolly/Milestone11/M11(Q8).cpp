//Write a program to check if elements of an array are same or not it read from front or back.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10],count=0;

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<10;i++)	
    cin>>a[i];
    
  
  for(int i=0,j=9;i<10,j>=0;i++,j--)	
  {    if(a[i]==a[j])
       count=0;
       else
       count++;
     }
  
  if(count==0)
  cout<<"Elements of array are same as reverse "<<endl;
  else
  cout<<"Elements of array are not same as reverse "<<endl;
  
	getch();
	return 0;
}
