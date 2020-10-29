//  Created by Utkarsh Thakur on 04/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i,b,e;
    long long p=1;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the exponent: ";
    cin>>e;
    
    for(i=1; i<=e; i++)
    {
        p=p*b;
    }
    
    cout<<""<<b<<" ^ "<<e<<" = "<<p<<"\n\n";
    
    return 0;
}
