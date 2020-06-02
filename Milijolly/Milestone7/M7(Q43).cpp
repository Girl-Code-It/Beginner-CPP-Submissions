//Write a C++ program to convert Octal to Decimal number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{ int Octalconst[] = {0, 1, 10, 11, 100, 101, 110, 111};
  int n,sum,temp,octal,digit;

 cout<<"Enter the octal number "<<endl;
 cin>>octal;
 
 temp=octal;
 n=0;sum=0;
 while(temp!=0)
 {  
    digit=temp%10;
    sum=sum+ digit*pow(8,n);
    temp=temp/10;
    n++;
 }
 
 cout<<"Decimal number is "<<endl;
 cout<<sum;
 
 getch();
 return 0;
}
