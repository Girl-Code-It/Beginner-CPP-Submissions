//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int oc[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long b, o, tb;
    int d, p, i;

    o = 0;
    p= 1;
    
    cout<<"Enter any binary number: ";
    cin>>b;

    tb = b;
    
    while(tb != 0)
    {
        d = tb % 1000;

        for(i=0; i<8; i++)
        {
            if(oc[i] == d)
            {
                
                o = (i * p) + o;
                break;
            }
        }

        tb /= 1000;
        p *= 10;
    }

    cout<<"Original binary number = "<<b<<"\n";
    cout<<"Octal number = "<<o<<"\n\n";

    return 0;
}
