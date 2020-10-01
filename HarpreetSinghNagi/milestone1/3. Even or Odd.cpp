// Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store the number that user will enter and for the in-program calculation.
    int n1;
    
//  I/O statments regarding the number for user friendly interface.
    cout<<"Enter the first number: ";
    cin>>n1;

//  IF & ELSE statement for compiler system to check which no. is even or odd by simple math.
    if(n1 % 2 ==0)
    {
        cout<<"Entered number is even...\n\n";
    }
    
    else
    {
        cout<<"Entered number is odd...\n\n";
    }
    return 0;
}
