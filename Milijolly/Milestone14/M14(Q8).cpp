//Write a program to reverse a string

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str[80]; int i,temp,m,j;

    cout<<"Enter string: ";
    gets(str);
    
    m=strlen(str);
    
    for(i =0,j=m-1; i<m/2; i++,j--)
    {
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;
      
    }
	
	
	cout<<"Reversed string is "<<endl;
	puts(str);
    
    getch();
	return 0;
}
