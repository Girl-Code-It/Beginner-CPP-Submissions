//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    long long d, td, o;
    int r, p = 1;
    o = 0;
    
    cout<<"Enter any Decimal number: ";
    cin>>d;

    td = d;

    while(td > 0)
    {
        r = td % 8;
        o = (r * p) + o;
        td /= 8;
        p *= 10;
    }

    cout<<"Decimal number = "<<d<<"\n";
    cout<<"Octal number = "<<o<<"\n\n";
    return 0;
}
