//Write a C++ program to find all factors of a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int i, prod=1,num; 

  cout<<"enter the  number "<<endl;
  cin>>num;
  cout<<"factors of "<<num<<" is ";
  
  for(i=1;i<=num;i++)
  {
   if(num%i==0)
  cout<<i<<" , "; 
  }
  
  getch();
  return 0;
}
