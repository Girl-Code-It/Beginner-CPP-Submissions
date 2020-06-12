//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <math.h>
#define BASE 2
using namespace std;

int main()
{
    long long b, d=0, tb;
    int N=0;

    cout<<"Enter any binary number: ";
    cin>>b;

    tb = b;

    while(tb!=0)
    {
        if(tb % 10 == 1)
        {
            d += pow(BASE, N);
        }

        N++;
        tb /= 10;
    }

    cout<<"Binary number = "<<b<<"\n";
    cout<<"Decimal number = "<<d<<"\n\n";

    return 0;
}
