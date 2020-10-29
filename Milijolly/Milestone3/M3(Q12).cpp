//Write a C++ program to find sum of first and last digit of a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{   int num,lastdigi,firstdigi,sum;

   cout<<"enter the number  ";
   cin>>num;
   
   firstdigi=num;
   lastdigi= num%10;
   
   while(firstdigi>10)
   { 
   firstdigi=firstdigi/10;
   }
   
   sum=firstdigi+lastdigi;
   cout<<"The sum of first and last digit "<<sum;
   
   getch();
   return 0;
 
}
