//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking char variables to store value which user will enter and for in-program use.
    char i,j;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to print all alphabet from a to z:- \n\n";
    cout<<"Press x and enter to start printing else press any other key to exit: ";
    cin>>j;
    
//  IF Statement to check wheather the input is to start the program or to exit.
    if(j=='x')
    {
        cout<<"Alphabets from a to z:- \n\n";
        
//      FOR loop to print alphabets.
        for(i=97;i<=122;i++)
        {
            cout<<""<<i<<"\n";
        }
    }

//  ELSE Statement to print defalut output.
    else
    {
        cout<<"Thank you...\n\n";
    }
    
    return 0;
}
