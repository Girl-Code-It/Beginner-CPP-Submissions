//Write a program to shift every element of an array to circularly right
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{  
   int a[] = { 1,2,3,4,5 },i,num,temp;


	
	temp=a[4];
	for(i = 4; i>=1; i--)
    {
      a[i]=a[i-1];}
  
    a[0]=temp;
  
  for(i = 0; i<=4; i++)
  {
    cout<<a[i]<< "\n";}
  
  getch();
  return 0;
}			

