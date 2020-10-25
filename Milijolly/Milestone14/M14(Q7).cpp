//Write a program to find a substring within a string. If found display its starting position

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;


int main()
{
	char str1[80],str2[80]; int i,j,l,m,count=0;
    
    cout<<"Enter first string: ";
    gets(str1);
    
    cout<<"Enter second string: ";
    gets(str2);
    
    m=strlen(str1);
    l=strlen(str2);
    
    for(i = 0,j=0; str1[i] != '\0'&&str2[j]!='\0'; i++)
    {
        if(str1[i]==str2[j])
        {
           count++; j++;
        }
         
        else
         count=0;
    
    }
    
    
    if(count==l)
    cout<<"postion of substring is "<<i-j+1;
    
    else
    cout<<"substring not found ";
    
	
	getch();
	return 0;
}
