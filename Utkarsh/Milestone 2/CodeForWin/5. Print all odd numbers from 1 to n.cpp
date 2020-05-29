//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store the value which user will enter and for in-program usage.
    int i=1,n;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to print all odd numbers from 1 to n:- \n\n";
    cout<<"Enter the value n: ";
    cin>>n;
    cout<<"\n\nOdd numbers till n are:- \n";
    
//  FOR Loop to print all even numbers till n.
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<"-->"<<i<<"\n";
        }
    }
    return 0;
}
