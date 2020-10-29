//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    char hex[17];
       long long d, p, l;
       int i = 0, v=0;

       d = 0;
       p = 1;

       cout<<"Enter any Hexadecimal number: ";
       cin>>hex;

       l = strlen(hex);
       l--;

       for(i=0; hex[i]!='\0'; i++)
       {
    
           if(hex[i]>='0' && hex[i]<='9')
           {
               v = hex[i] - 48;
           }
           else if(hex[i]>='a' && hex[i]<='f')
           {
               v = hex[i] - 97 + 10;
           }
           else if(hex[i]>='A' && hex[i]<='F')
           {
               v = hex[i] - 65 + 10;
           }

           d += v * pow(16, l);
           l--;
       }

       cout<<"Hexadecimal number = "<<hex<<"\n";
       cout<<"Decimal number = "<<d<<"\n\n";
    return 0;
}
