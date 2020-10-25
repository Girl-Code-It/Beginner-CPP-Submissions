//Write a program to count number of words in string.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str[80]; int i,count=0;

    cout<<"Enter string: ";
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
    	if(str[i]==' ')
    	count++;
    }
    
    cout<<"no of words are "<<++count;

   	getch();
	return 0;
}
