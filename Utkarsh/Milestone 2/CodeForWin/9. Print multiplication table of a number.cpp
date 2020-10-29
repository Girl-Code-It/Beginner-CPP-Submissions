//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user will enter and for in-program usage.
    int i=1,n,m;
    
//  I/O Statements for a user friendly interface.
    cout<<"Enter the number of which the multiplication table to be printed: ";
    cin>>n;
    cout<<"\n\nMULTIPLICATION TABLE OF "<<n<<"\n\n";

//  FOR loop to create and print table.
    for(i=1;i<=10;i++)
    {
        m=n*i;
        cout<<""<<n<<" x "<<i<<" = "<<m<<"\n";
    }
    
    return 0;
}
