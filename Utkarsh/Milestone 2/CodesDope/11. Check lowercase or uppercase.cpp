//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking char variable to store character which user will enter.
    char c;
    
//  I/O Statements for a user friendly interface.
    cout<<"Enter the character which has to be check for upper or lower case: ";
    cin>>c;
    
//  IF/ELSE Statement to check entered character falls in which range.
    if(c>=65 && c<=90)
    {
        cout<<"CHARACTER IS UPPER CASE...\n\n";
    }
    if(c>=97 && c<=122)
    {
        cout<<"CHRACTER IS LOWER CASE...\n\n";
    }
    else
    {
        cout<<"ENTERED CHARACTER DOES NOT FALL BETWEEN A-Z or a-z RANGE...\n\n";
    }
    return 0;
}
