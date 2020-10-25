//Write a program to find the length of string

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
    count++;

    cout << "Length of string is: " <<count;
	
	getch();
	return 0;
}
