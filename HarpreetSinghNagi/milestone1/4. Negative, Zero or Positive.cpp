// Created by Utkarsh Thakur on 13/05/20.
// Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store the number which user will enter.
    int n1;
    
//  I/O Statements regarding the number for a user friendly interface.
    cout<<"Check wheather the number is positive, negative or zero...!\n\n";
    cout<<"Enter the number: ";
    cin>>n1;

//  IF/ELSE statement to compare the entered number is +ve, -ve or 0.
    if(n1>0)
    {
        cout<<"Number is Positive.\n\n";
    }
    else if(n1<0)
    {
        cout<<"Number is Negative.\n\n";
    }
    else
    {
        cout<<"Number is Zero.\n\n";
    }
    return 0;
}
