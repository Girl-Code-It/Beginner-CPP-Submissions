//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <math.h>
using namespace std;;

int main()
{
    int n, ld, d, sum, i, n1;

        cout<<"Enter upper limit: ";
        cin>>n1;

        cout<<"Armstrong number between 1 to "<<n1<<" are: \n";

        for(i=1; i<=n1; i++)
        {
            sum = 0;
            n = i;
            d = (int) log10(n) + 1;
            
            while(n > 0)
            {
                ld = n % 10;
                sum = sum + ceil(pow(ld, d));
                n = n / 10;
            }

            if(i == sum)
            {
                cout<<""<<i<<", ";
            }
        }
        cout<<"\n\n";
        return 0;
    }
