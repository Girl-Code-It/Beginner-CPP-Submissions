/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0. */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{ int a[10],o=0,p=0,n=0,odd=0,even=0,i;

 cout<<"Enter 10 intergers "<<endl;
 for(i=0;i<10;i++)	
   cin>>a[i];  
   
   for(i=0;i<10;i++)  
 { 
   if(a[i]==0)
   o++;
   else if(a[i]<0)
   n++;
   else 
   p++;
   
   if(a[i]%2==0)
   even++;
   else
   odd++;
 }
 
 cout<<"number of positive numbers"<<p<<endl;
 cout<<"number of negative numbers"<<n<<endl;
 cout<<"number of zeroes"<<o<<endl;
 cout<<"number of even numbers"<<even<<endl;
 cout<<"number of odd numbers"<<odd<<endl;
 
 getch();
 return 0;
 
}

