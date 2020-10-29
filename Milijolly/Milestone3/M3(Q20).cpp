//Write a C++ program to print all ASCII character with their values. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int i;
   char ch;

  for(i=1;i<=255;i++)
  { ch=i;
  cout<<"ASCII value of character  "<<ch<<" is  "<<i<<endl;
  }
  
  getch();
   return 0; 
   }
