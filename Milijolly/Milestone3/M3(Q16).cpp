//Write a C++ program to enter a number and print its reverse.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{ 
 int num,n;
 cout<<"Enter the number ";
 cin>>num;
 
 n=num;
 while(n!=0)
   { cout<<n%10;
     n=n/10;
      }

   getch();
   return 0;

}
