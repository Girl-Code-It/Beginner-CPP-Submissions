//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store value which user will enter and for in-program usage.
    int i,n;
    
//  I/O Statement for a user friendly interface.
    cout<<"Program to print first n natural numbers in reverse order.\n";
    cout<<"Enter the number of natural numbers should be printed: ";
    cin>>n;
    cout<<"\n\nFirst "<<n<<" natural numbers in reverse order are: \n";
    
//  For loop to print the desired number of natural numbers.
    for((i=n);n>=1;n--)
    {
        cout<<""<<n<<"\n\n";
    }
    
    return 0;
}
