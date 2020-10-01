//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int OC[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long o, to, b, p;
    int r;
    
    cout<<"Enter any Octal number: ";
    cin>>o;
    
    to = o;
    b = 0;
    p  = 1;
    
    while(to > 0)
    {
        r = to % 10;
        b = (OC[r] * p) + b;
        to /= 10;
        p *= 1000;
    }

    cout<<"Octal number = "<<o<<"\n";
    cout<<"Binary number = "<<b<<"\n\n";

    return 0;
}
