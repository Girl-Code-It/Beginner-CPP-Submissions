//Write a C++ program to convert Decimal to Hexadecimal number system.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{  int num,temp,digit,index=0;
   char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
   char hex[65];
	
	cout<<"Enter the number "<<endl;
    cin>>num;
    
    temp=num;
    
    while(temp !=0)
    {
        digit = temp % 16;

        hex[index] = HEXVALUE[digit];

        temp/= 16;

        index++;
    }
    hex[index] = '\0';

    strrev(hex);
  
    cout<<"Hexadecimal number";
    puts(hex);
    
	getch();
	return 0;
	
}
	
