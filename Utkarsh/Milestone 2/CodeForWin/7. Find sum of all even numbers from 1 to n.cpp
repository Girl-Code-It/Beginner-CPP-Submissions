//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store value which user will enter and for in-program usage.
    int i,n,s=0;
    
//  I/O Statement for a user friendly interface.
    cout<<"Program to find sum of all natural even numbers till n: \n\n";
    cout<<"Enter the value of n: ";
    cin>>n;
    
//  FOR loop to calculate sum
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        s=s+i;
        }
    }
    
    cout<<"\n\nSum of all natural even numbers till n is: "<<s<<"\n\n\n";
    return 0;
}
