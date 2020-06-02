//M3Q11 Write a C++ program to find first and last digit of a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{   int num,lastdigi,firstdigi;

   cout<<"enter the number  ";
   cin>>num;
   
   firstdigi=num;
   lastdigi= num%10;
   
   while(firstdigi>10)
   { 
   firstdigi=firstdigi/10;
   }
   cout<<endl<<"first digit is  "<<firstdigi;
   cout<<endl<<"last digit is  "<<lastdigi;
   
 getch();
 return 0;
 
}
