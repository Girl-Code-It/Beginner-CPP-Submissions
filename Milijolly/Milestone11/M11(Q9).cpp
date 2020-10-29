//Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{
	int a[10],b[5],c[5],i;

 cout<<"Enter 10 intergers "<<endl;
 for(i=0;i<10;i++)	
    cin>>a[i];
    int j=0;
for(i=0;i<10;i++)
  {
  	  if(i<5)
		b[i]=a[i];
	  else
	   {
	    c[j]=a[i];	j++; }
  }
  
  cout<<"2 different arrays are "<<endl;
  
for(i=0;i<5;i++)
  	  cout<<b[i]<<" ";
  
  cout<<endl;	  
	  	
for(i=0;i<5;i++)
  	  cout<<c[i]<<" ";
  
  cout<<endl;	  
	  	
 	getch();
	return 0;
	
	
}
