//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, pr, sum=0;

    cout<<"Find sum of all prime between 1 to : ";
    cin>>n;

    for(i=2; i<=n; i++)
    {

        pr = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                pr = 0;
                break;
            }
        }
        if(pr==1)
        {
            sum += i;
        }
    }

    cout<<"Sum of all prime numbers between 1 to "<<n<<" = "<<sum<<"\n\nf";

    return 0;
}
