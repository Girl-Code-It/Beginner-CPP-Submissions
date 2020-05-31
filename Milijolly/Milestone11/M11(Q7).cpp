//Find largest and smallest elements of an array. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10],max,min,i,j;

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
 }
 
 cout<<"Max is "<<max<<endl;
 cout<<"MIN is "<<min;
 
 getch();
 return 0;
}
