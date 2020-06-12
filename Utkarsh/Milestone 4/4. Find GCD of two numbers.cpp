//  Created by Utkarsh Thakur on 05/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int n1,n2,min,hcf=1,i;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    
    min = (n1<n2) ? n1 : n2;

    for(i=1; i<=min; i++)
    {
// If i is factor of both number
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    
    cout<<"GCD of the numbers entered is: "<<hcf<<"\n\n";
    return 0;
}
