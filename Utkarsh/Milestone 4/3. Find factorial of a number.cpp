//  Created by Utkarsh Thakur on 04/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    long long f=1;
    cout<<"Program to find factorial of a number:\nEnter the Number: ";
    cin>>n;
    
     for(i=1; i<=n; i++)
       {
           f = f * i;
       }

    cout<<"Factorial of "<<n<<" is: "<<f<<"\n\n";
    return 0;
}
