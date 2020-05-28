// Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store the values which user will enter.
    int n1,n2;
    
//  I/O Statements for a user friendly interface.
    cout<<"Enter first value: ";
    cin>>n1;
    cout<<"Enetr second value: ";
    cin>>n2;
    
//  IF/ELSE Statement to compare the values entered by user.
    if(n1>n2)
    {
        cout<<"First number is greatest among the 2 entered...\n\n";
    }
    else if(n1<n2)
    {
        cout<<"Second number is greatest among the 2 entered...\n\n";
    }
    else
    {
        cout<<"Entered numbers are equal...\n\n";
    }
    return 0;
}
