//Write a C++ program to convert Hexadecimal to decimal number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;


int main()
{
    char hex[17];
    long sum;
    int i = 0, val, len;

    sum= 0;
    cout<<"enter hexadecimal string "<<endl;
    gets(hex);

    len = strlen(hex);
    len--;

    
    for(i=0; hex[i]!='\0'; i++)
    {
 
       
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        if(hex[i]=='a'|| hex[i]=='A')
		{  val=10;
		}
		 
		if(hex[i]=='b'|| hex[i]=='B')
		{  val= 11;
		}
		
		if(hex[i]=='c'|| hex[i]=='C')
		{  val= 12;
		}
		 
		if(hex[i]=='d'|| hex[i]=='D')
		{  val= 13;
		}
		if(hex[i]=='e'|| hex[i]=='E')
		{  val= 14;
		}
		if(hex[i]=='f'|| hex[i]=='F')
		{  val= 15;
		}

        sum += val * pow(16, len);
        len--;
    }

    
    cout<<"decimal number is "<<endl<<sum;
     getch();
     return 0;
}
