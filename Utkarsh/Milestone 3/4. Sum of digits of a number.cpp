//  Created by Utkarsh Thakur on 16/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user will enter and for in-program calculation.
    int n,s=0;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to sum digits of a number...!\n\n";
    cout<<"Enter a number to find the sum of it's digits: ";
    cin>>n;

//  While loop to calculate sum of digits.
    while(n!=0)
    {
        s+=n%10;
        n=n/10;
    }
    
//  Output to print sum of digits.
    cout<<"Sum of the digits are: "<<s<<"\n\n";
    return 0;
}
