//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
        int a, b, c, i, n;

        cout<<"Enter number of terms: ";
        cin>>n;

        a = 0;
        b = 1;
        c = 0;

        cout<<"Fibonacci terms: \n";

        for(i=1; i<=n; i++)
        {
            cout<<""<<c<<", ";

            a = b;
            b = c;
            c = a + b;
        }
    cout<<"\n\n";
    return 0;
}
