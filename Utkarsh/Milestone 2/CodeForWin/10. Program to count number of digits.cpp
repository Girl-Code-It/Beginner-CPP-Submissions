//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    long long n;
    int c = 0;

//  Input number from user.
    cout<<"Enter any number: ";
    cin>>n;

//  Run loop till num is greater than 0
    do
    {
//  Increment digit count
        c++;

//  Remove last digit of 'num'
        n=n/10;
    }
    while(n != 0);

    cout<<"Total digits: "<<c<<"\n\n\n";

    return 0;
}
