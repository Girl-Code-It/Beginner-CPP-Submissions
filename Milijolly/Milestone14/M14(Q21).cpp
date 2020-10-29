//UpUp
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;

int main()
{                  
  char s[30000];
  	gets(s);
  	for(int i=0;i<strlen(s);i++) 
  	{   
		if(islower(s[0]))              
		    s[0]=toupper(s[0]);  
		if(s[i]==' '&& islower(s[i+1])) 
		    s[i+1]=toupper(s[i+1]);	
		
    }
  puts(s);
}
