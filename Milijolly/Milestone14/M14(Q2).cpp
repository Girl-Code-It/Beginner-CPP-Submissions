//Write a program to display string from backward. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str[80]; int i,m;

    cout<<"Enter string: ";
    gets(str);
    
    m=strlen(str);
    
    for(i =m; i>=0; i--)
    cout<<str[i];

	
	getch();
	return 0;
}
