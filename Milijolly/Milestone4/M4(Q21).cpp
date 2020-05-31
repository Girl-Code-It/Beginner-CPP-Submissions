//Write a C++ program to find power of a number using for loop.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int prod=1,base,exp; 

  cout<<"enter the base number "<<endl;
  cin>>base;
  cout<<"enter the exponent power "<<endl;
  cin>>exp;
  
  for(int i=1;i<=exp;i++)
  prod=prod*base;
  
  cout<<base<<"^"<<exp<<" = "<<prod<<endl;
  
  getch();
  return 0;
}
