//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int on, n, ld, d, sum;

    cout<<"Enter any number to check Armstrong number: ";
    cin>>n;

    sum = 0;
    on = n;
    d = (int) log10(n) + 1;

    while(n > 0)
    {
        ld = n % 10;
        sum = sum + round(pow(ld, d));
        n = n / 10;
    }
    
    if(on == sum)
    {
        cout<<""<<on<<" is ARMSTRONG NUMBER";
    }
    else
    {
        cout<<""<<on<<" is NOT ARMSTRONG NUMBER";
    }
    cout<<"\n\n";
    return 0;
}
