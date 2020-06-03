//Write a C++ program to convert Octal to Hexadecimal number system.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{ char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int sum,octal,digit,digit2,index,sumdeci,n;
  long tempDecimal,temp;
    char hex[65];
    
 cout<<"Enter the octal number "<<endl;
 cin>>octal;
 
 temp=octal;
 n=0;sumdeci=0;
 while(temp!=0)
 {  
    digit=temp%10;
    sumdeci=sumdeci+ digit*pow(8,n);
    temp=temp/10;
    n++;
 }
 
 tempDecimal=sumdeci;
 index=0;
 
  while(tempDecimal !=0)
    {
        digit2 = tempDecimal % 16;

        hex[index] = HEXVALUE[digit2];

        tempDecimal /= 16;

        index++;
    }
    hex[index] = '\0';

    strrev(hex);
  
    cout<<"Hexadecimal number";
    puts(hex);
    
    getch();
    return 0;
}
   

   
 

 
 
