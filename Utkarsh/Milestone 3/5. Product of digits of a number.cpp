//  Created by Utkarsh Thakur on 16/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user will enter and for in-program calculation.
    int n,l;
    long long product=1ll;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to find product of digits of a number...!\n\n";
    cout<<"Enter a number to find the product of it's digits: ";
    cin>>n;

//  While loop to calculate product of digits.
    while(n!=0)
    {
        l=n%10;
        product = product * l;
        n=n/10;
    }
    
//  Output to print product of digits.
    cout<<"Product of the digits are: "<<product<<"\n\n";
    return 0;
}
