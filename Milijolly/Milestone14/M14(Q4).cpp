//Write a program to concatenate one string contents to another

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str1[80],str2[80]; int i,l;
    
    cout<<"Enter first string: ";
    gets(str1);
    
    cout<<"Enter second string: ";
    gets(str2);

    l=strlen(str1);
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }
	
    str1[l] = '\0';
    
    cout<<"concatenated string is "<<endl;
	puts(str1);
    
	
	getch();
	return 0;
}
