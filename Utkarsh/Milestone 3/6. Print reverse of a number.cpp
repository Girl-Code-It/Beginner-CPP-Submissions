//  Created by Utkarsh Thakur on 16/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user will enter and for in-program calculation.
    int n,l;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to print reverse of a number...!!!\n\n";
    cout<<"Enter the number: ";
    cin>>n;
    
//  Printing reverse of number using while loop.
    cout<<"\n\nNumber in reverse order: ";
    while(n!=0)
    {
        l=n%10;
        n=n/10;
        cout<<""<<l<<"";
    }
    cout<<"\n\n";
    return 0;
}

