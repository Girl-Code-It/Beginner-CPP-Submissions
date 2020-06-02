 //program to convert binary to hexadecimal number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long  binary, temp;
    char hex[20];
    int index, i, digit;
    
    cout<<"Enter binary number:";
    cin>>binary;
    
    temp= binary;
    index = 0;
    
    
    while(temp!=0)
    {
        
        digit = temp% 10000;

        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                   
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        
        temp /= 10000;
    }
    hex[index] = '\0';

    
    strrev(hex);


    cout<<"Hexadecimal number"; 
	puts(hex);

    return 0;
}
