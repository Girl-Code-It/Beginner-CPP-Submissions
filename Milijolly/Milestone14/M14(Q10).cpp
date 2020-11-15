// Write a program to convert a string in uppercase.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<ctype.h>     //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str[80]; int i,m;

    cout<<"Enter string: ";
    gets(str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
		str[i]=(str[i] - 32);
    }

    
	cout<<"string is "<<endl;
	puts(str);
    
    getch();
	return 0;
}
