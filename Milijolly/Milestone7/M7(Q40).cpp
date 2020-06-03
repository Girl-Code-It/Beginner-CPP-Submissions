//Write a C++ program to convert Binary to Decimal number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include <stdio.h>

using namespace std;

int main()
{ int num,i,temp,digit,sum;

cout<<"Enter the binary number "<<endl;
cin>>num;

 temp=num;
 sum=0; i=0;
 while(temp!=0)
 {
 	digit=temp%10;
 	
   sum=sum+(digit*pow(2,i));
      i++;     
     temp=temp/10;
}

cout<<"Decimal number is "<<sum;

getch();
return 0;

}
