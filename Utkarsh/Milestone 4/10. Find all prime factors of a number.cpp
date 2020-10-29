//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, pr;

    cout<<"Enter any number to print it's Prime factors: ";
    cin>>n;

    cout<<"All Prime Factors of "<<n<<" are: \n";

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
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
                cout<<""<<i<<"";
            }
        }
    }
    cout<<"\n\n";
    return 0;
}
