//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    int hc[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
                1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long b, tb;
    char hex[20];
    int i1, i, d;
    
    cout<<"Enter binary number: ";
    cin>>b;
    
    tb = b;
    i1 = 0;
    
    while(tb!=0)
    {
        d = tb % 10000;

        for(i=0; i<16; i++)
        {
            if(hc[i] == d)
            {
                if(i<10)
                {
                    hex[i1] = (char)(i + 48);
                }
                else
                {
                    hex[i1] = (char)((i-10) + 65);
                }

                i1++;
                break;
            }
        }

        tb /= 10000;
    }
    hex[i1] = '\0';
    
    string str(hex);
    reverse(str.begin(), str.end());

    cout<<"Binary number = "<<b<<"\n";
    cout<<"Hexadecimal number = "<<str<<"\n\n";

    return 0;
}
