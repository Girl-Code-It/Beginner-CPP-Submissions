//Write a C++ program to swap first and last digits of a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{   int num,count=0,firstdigi,lastdigi,term ,sum=0;

   cout<<"enter the number  ";
   cin>>num;
   
   firstdigi=num;
   lastdigi= num%10;
   
   while(firstdigi>10)
   { 
   firstdigi=firstdigi/10;
   count++;
   }
   
   term=pow(10,count);
   sum=lastdigi*term;
   sum=sum + (num%term);
   sum=sum-lastdigi;
   sum=sum+firstdigi;
   
   cout<<"swapped number is "<< sum;
   
   getch();
   return 0;
 
}
   
   
   
