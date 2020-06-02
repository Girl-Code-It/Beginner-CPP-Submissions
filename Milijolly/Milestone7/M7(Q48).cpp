// Write a C++ program to convert Hexadecimal to Binary number system.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{  int num,temp,digit,index=0;
   
   char hex[17],binary[65]=" ";
	
	cout<<"Enter the hexadecimal number "<<endl;
	gets(hex);
	
	for(int i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(binary, "0000");       break;
            case '1':
                strcat(binary, "0001");       break;
                
            case '2':
                strcat(binary, "0010");      break;
                
            case '3':
                strcat(binary, "0011");       break;
                
            case '4':
                strcat(binary, "0100");       break;
                
            case '5':
                strcat(binary, "0101");       break;
            
            case '6':
                strcat(binary, "0110");       break;
                
            case '7':
                strcat(binary, "0111");       break;
                
            case '8':
                strcat(binary, "1000");       break;
    
            case '9':
                strcat(binary, "1001");       break;
                
            case 'a':
            case 'A':
                strcat(binary, "1010");       break;
               
            case 'b':
            case 'B':
                strcat(binary, "1011");       break;
               
            case 'c':
            case 'C':
                strcat(binary, "1100");       break;
               
            case 'd':
            case 'D':
                strcat(binary, "1101");       break;
               
            case 'e':
            case 'E':
                strcat(binary, "1110");       break;
               
            case 'f':
            case 'F':
                strcat(binary, "1111");        break;
            default:
                cout<<"Invalid hexadecimal";
        }
    }

   
    cout<<"Binary number";
    puts(binary);

    getch();
	return 0;
}




