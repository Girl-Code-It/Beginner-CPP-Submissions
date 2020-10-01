//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, pr;
    
        cout<<"Find prime numbers between 1 to : ";
        cin>>n;

        cout<<"All prime numbers between 1 to "<<n<<" are:\n";

        
        for(i=2; i<=n; i++)
        {
            pr = 1;

            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    pr = 0;
                    break;
                }
            }

            if(pr==1)
            {
                printf("%d, ", i);
            }
        }
    cout<<"\n\n";

        return 0;
    }
