//Write a program to compare two strings they are exact equal or not.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str1[80],str2[80]; int i,count=0;

    cout<<"Enter first string: ";
    gets(str1);
    
    cout<<"Enter second string: ";
    gets(str2);

    
    for( i = 0; str2[i] != '\0'; i++)
    {
        if(str1[i]!= str2[i])
        count=1;
    }
	
	if(count==0)
	cout<<"the strings are equal ";
	
	else
	cout<<" strings are not equal";
	
	getch();
	return 0;
}
