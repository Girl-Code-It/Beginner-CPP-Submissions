//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int OC[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long o, to, b, p;
    char hex[65] = "";
    int r;

    p = 1;
    b = 0;
    
    cout<<"Enter any Octal number: ";
    cin>>o;
    
    to = o;

    while(to > 0)
    {
        r = to % 10;
        b = (OC[r] * p) + b;
        to /= 10;

        p *= 1000;
    }
    
    while(b > 0)
    {
        r = b % 10000;
        switch(r)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        b /= 10000;
    }

    string str(hex);
    reverse(str.begin(), str.end());

    cout<<"Octal number: "<<o<<"\n";
    cout<<"Hexadecimal number: "<<str<<"\n\n";
    return 0;
}
