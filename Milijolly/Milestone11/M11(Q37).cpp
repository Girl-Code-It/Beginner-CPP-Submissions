//sort even and odd elements of array separately

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[10],ev[10],odd[10],i,j,k,temp,o=0,e=0;
	
	cout<<"Enter the 10 elements of an array "<<endl;
  	
  	for(i=0;i<10;i++)
	 {  cin>>a[i]; }
	  
	for(i=0;i<10;i++)
	 {  
		if(a[i]%2==0)
	    {
	     ev[e]=a[i];
	     e++;     }
	   
	   else
	   { 
	     odd[o]=a[i];
	     o++;
	   }  
     }
     
     for(i=0;i<e-1;i++)
	 {
	   for(j=0;j<e-1-i;j++)
	   {
	  	  if(ev[j]>ev[j+1])
	  	  {
	  	  	temp=ev[j];
	  	  	ev[j]=ev[j+1];
	  	  	ev[j+1]=temp;
	  	  }

	   } 
     }
     
     for(i=0;i<o-1;i++)
	 {
	   for(j=0;j<o-1-i;j++)
	   {
	  	  if(odd[j]>odd[j+1])
	  	  {
	  	  	temp=odd[j];
	  	  	odd[j]=odd[j+1];
	  	  	odd[j+1]=temp;
	  	  }

	   } 
     }
     
     
	cout<<"Array with even elements "<<endl;
	
	for(i=0;i<e;i++)
	  cout<<ev[i]<<" ";
	 
	 cout<<endl;
	
	cout<<"Array with even elements "<<endl;
	
	for(i=0;i<o;i++)
	  cout<<odd[i]<<" ";

getch();
return 0;

}
