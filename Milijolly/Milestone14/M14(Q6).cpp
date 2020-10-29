//Write a program to check a string is palindrome or not.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str[80]; int i,count=0,m,j;

    cout<<"Enter string: ";
    gets(str);
    
    m=strlen(str);
    
    for(i =0; i<=m/2; i++)
    {
      if(str[i]!=str[m-i-1])
      count=1;
      
   }
   
   if(count==0)
	cout<<"the string is a palindrome ";
	
	else
	cout<<"the string is not a palindrome ";
	
    

	
	getch();
	return 0;
}
