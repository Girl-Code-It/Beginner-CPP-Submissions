//Write a C++ program to check whether a number is palindrome or not.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{    
 int num,n,rev=0;
 
 cout<<"enter a number "<<endl;
 cin>>n;
  num=n;
  while(num!=0)
  { 
   rev= (rev*10) + (num%10);
   num=num/10;
  }
	
 cout<<"reverse is "<<rev<<endl;
 
 if(n==rev)
 cout<<"it is a palindrome";
 	

   getch();
   return 0;	
}
	
	
	

