//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout<<"Enter any number to check perfect number: ";
    cin>>n;

    for(i = 1; i <= n / 2; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }

    if(sum == n)
    {
        cout<<""<<n<<" is PERFECT NUMBER";
    }
    else
    {
        cout<<""<<n<<" is NOT PERFECT NUMBER";
    }
    
    cout<<"\n\n";
    return 0;
}
