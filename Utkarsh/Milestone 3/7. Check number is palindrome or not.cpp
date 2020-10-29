//  Created by Utkarsh Thakur on 16/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user will enter and for in-program calculation.
    int n,l=0,r;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to print reverse of a number...!!!\n\n";
    cout<<"Enter the number: ";
    cin>>n;
 
//  While loop to get reverse of the number.
    int num=n;
    while(n!=0)
    {
        l=(l*10)+(n%10);
        n=n/10;
    }
    
//  IF Statement to check the number is palindrome or not.
    if (num==l)
    {
        cout<<"\n\nRESULT: It's a palindrome\n\n";
    }
    else
    {
     cout<<"\n\nRESULT: It's not a palindrome\n\n";
    }
    cout<<"\n\n";
    return 0;
}

