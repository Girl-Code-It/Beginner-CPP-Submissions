//Compiler Version 

#include<iostream>
#include<string.h>

using namespace std;

int main() 
{
    int len,i,j;        
    char str[2000];
    while(gets(str)!=NULL)  
    {
    len=strlen(str);  
    for(i=0;i<=len-1;i++)
    {
      if(str[i]=='/' && str[i+1]=='/')  
        {
          break;
        }
        else
        {
          if(str[i]=='-' && str[i+1]=='>') 
            {
              str[i]='.';
              for(j=i+1;j<=len-1;j++)
                {                     
                    str[j]=str[j+1];     
                }  
                len--;                  
              }
        }
    }
    puts(str);
    }
    return 0;
}	
