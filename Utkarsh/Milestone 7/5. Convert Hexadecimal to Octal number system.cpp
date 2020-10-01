//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char hex[17];
    long long o, b, p;
    int i = 0, r, v=0;

    cout<<"Enter any hexadecimal number: ";
    cin>>hex;

    o = 0ll;
    b = 0ll;
    p = 0ll;

    for(i=0; hex[i]!='\0'; i++)
    {
        b = b * p;

        switch(hex[i])
        {
            case '0':
                b += 0;
                break;
            case '1':
                b += 1;
                break;
            case '2':
                b += 10;
                break;
            case '3':
                b += 11;
                break;
            case '4':
                b += 100;
                break;
            case '5':
                b += 101;
                break;
            case '6':
                b += 110;
                break;
            case '7':
                b += 111;
                break;
            case '8':
                b += 1000;
                break;
            case '9':
                b += 1001;
                break;
            case 'a':
            case 'A':
                b += 1010;
                break;
            case 'b':
            case 'B':
                b += 1011;
                break;
            case 'c':
            case 'C':
                b += 1100;
                break;
            case 'd':
            case 'D':
                b += 1101;
                break;
            case 'e':
            case 'E':
                b += 1110;
                break;
            case 'f':
            case 'F':
                b += 1111;
                break;
            default:
                cout<<"Invalid input!!!";
        }

        p = 10000;
    }

    p = 1;

    while(b > 0)
    {
        r = b % 1000;

        switch(r)
        {
            case 0:
                v = 0;
                break;
            case 1:
                v = 1;
                break;
            case 10:
                v = 2;
                break;
            case 11:
                v = 3;
                break;
            case 100:
                v = 4;
                break;
            case 101:
                v = 5;
                break;
            case 110:
                v = 6;
                break;
            case 111:
                v = 7;
                break;
        }

        o = (v * p) + o;
        b /= 1000;

        p *= 10;
    }

    cout<<"Hexadecimal number = "<<hex<<"\n";
    cout<<"Octal number = "<<o<<"\n\n";
    return 0;
}
