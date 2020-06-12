//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long o, to, d;
    int r, p;
    
    cout<<"Enter any Octal number: ";
    cin>>o;
    
    to = o;
    d = 0;
    p = 0;
    
    while(to > 0)
    {
        r = to % 10;
        d += pow(8, p) * r;
        to /= 10;
        p++;
    }
    
    cout<<"Octal number = "<<o<<"\n";
    cout<<"Decimal number = "<<d<<"\n\n";
    
    return 0;
}
