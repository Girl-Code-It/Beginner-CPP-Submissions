//Take 10 integer inputs from user and store them in an array and print them on screen. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10];

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<10;i++)	
  {
   cin>>a[i];
  } 
  

cout<<"Intergers entered are "<<endl; 
 for(int j=0;j<10;j++)  
 { 
   cout<<a[j]<<endl;
 }
	
	getch();
	return 0;
}
