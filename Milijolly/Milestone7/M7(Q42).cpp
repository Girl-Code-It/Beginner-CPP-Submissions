//Write a C++ program to convert Octal to Binary number system

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
 n=1;sum=0;
 while(temp!=0)
 {  digit=temp%10;
 
   sum=sum+ Octalconst[digit]*n;
   
   n=n*1000;
   temp=temp/10;
 
 }
 
 cout<<"Binary number is "<<endl;
 cout<<sum;

    getch();
	return 0;
}
