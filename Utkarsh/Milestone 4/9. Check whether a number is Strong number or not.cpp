//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, on, n, ld, sum;
    long fact;

    cout<<"Enter any number to check Strong number: ";
    cin>>n;

    on = n;
    sum = 0;

    while(n > 0)
    {
        ld = n % 10;
        fact = 1;
       
        for(i=1; i<=ld; i++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        n = n / 10;
    }

    if(sum == on)
    {
        cout<<""<<on<<" is STRONG number";
    }
    else
    {
        cout<<""<<on<<" is NOT STRONG number";
    }
    cout<<"\n\n";
    return 0;
}
