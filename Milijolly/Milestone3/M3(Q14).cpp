//Write a C++ program to calculate sum of digits of a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<math.h> 

using namespace std;


int main()
{   int num,p,sum=0,n,term,term2,count=0;
 cout<<"Enter the number ";
 cin>>num;
 
 n=num;
 while(n>10)
   { n=n/10;
    count++;
   }
   term2=num;
   while(count>=0)
  {
   p=pow(10,count);
   term=term2/p;
   term2=(term2)%p;
   sum=sum+ term;
   count--;
   }
   
   cout<<"sum of digits "<<sum;
   
    getch();
   return 0;
 
}
   
