//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store value which user will enter and for in-program usage.
    int n,i=1;
    
//  I/O Statement for a user friendly interface.
    cout<<"Program to print first n natural numbers.\n";
    cout<<"Enter the number of first natural numbers should be printed: ";
    cin>>n;
    cout<<"\n\nFirst "<<n<<" natural numbers are: \n";
    
//  For loop to print the desired number of natural numbers.
    for(i=1;i<=n;i++)
    {
        cout<<""<<i<<"\n\n";
    }
    
    return 0;
}
