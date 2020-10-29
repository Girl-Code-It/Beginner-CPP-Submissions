//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ int a[10],count=0,num;

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<10;i++)	
  {
   cin>>a[i];
  } 
  cout<<"Enter a number to check "<<endl; 
  cin>>num;
 
 for(int i=0;i<10;i++)  
 { 
   if(a[i]==num)
   count++;
 }

if(count==0)
cout<<"Number is not present "<<endl;

else
cout<<"Number is present "<<endl;
	
	getch();
	return 0;
}
