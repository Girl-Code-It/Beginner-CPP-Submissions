//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10],b[10],i,j;

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<10;i++)	
    cin>>a[i];
  

cout<<"reverse array  "<<endl; 
 for(j=9,i=0;j>=0,i<10;j--,i++)  
 { 
   b[j]=a[i];
 }
 
 for(int j=0;j<10;j++)  
  cout<<b[j]<<" ";
	
	getch();
	return 0;
}
