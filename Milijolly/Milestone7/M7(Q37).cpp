//Write a C++ program to input binary number from user and find ones complement of binary number using loop

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{ char a[8];

cout<<"enter a binary string "<<endl;
gets(a);
 
for(int i=0;i<8;i++)
{ 
  if(a[i]=='1')
   a[i]='0';
  
  else if(a[i]=='0')
    a[i]='1'; 
} 
cout<<"COMPLEMENT of the number is ";
puts(a);

getch();
return 0;
}
