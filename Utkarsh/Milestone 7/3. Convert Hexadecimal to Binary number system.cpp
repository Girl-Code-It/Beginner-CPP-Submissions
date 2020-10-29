//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char hex[17], b[65] = "";
    int i = 0;

    cout<<"Enter any hexadecimal number: ";
    cin>>hex;

    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(b, "0000");
                break;
            case '1':
                strcat(b, "0001");
                break;
            case '2':
                strcat(b, "0010");
                break;
            case '3':
                strcat(b, "0011");
                break;
            case '4':
                strcat(b, "0100");
                break;
            case '5':
                strcat(b, "0101");
                break;
            case '6':
                strcat(b, "0110");
                break;
            case '7':
                strcat(b, "0111");
                break;
            case '8':
                strcat(b, "1000");
                break;
            case '9':
                strcat(b, "1001");
                break;
            case 'a':
            case 'A':
                strcat(b, "1010");
                break;
            case 'b':
            case 'B':
                strcat(b, "1011");
                break;
            case 'c':
            case 'C':
                strcat(b, "1100");
                break;
            case 'd':
            case 'D':
                strcat(b, "1101");
                break;
            case 'e':
            case 'E':
                strcat(b, "1110");
                break;
            case 'f':
            case 'F':
                strcat(b, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

    cout<<"Hexademial number = "<<hex<<"\n";
    cout<<"Binary number = "<<b<<"\n\n";
    return 0;
}
