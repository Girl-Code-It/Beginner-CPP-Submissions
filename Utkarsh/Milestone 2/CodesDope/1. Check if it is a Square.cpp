// Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store the numbers which user will enter and for in-program calculations.
    int l,b;
 
//  I/O statements for user friendly interface.
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;
    
//  IF/ELSE statement to check it's a sqaure or not.
    if (l==b)
    {
        cout<<"It's a square...\n\n";
    }
    else
    {
        cout<<"It's not a sqaure...\n\n";
    }
    return 0;
}
