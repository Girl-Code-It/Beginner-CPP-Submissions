//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, j, temp, ld, n;
    long long fact, sum;

    cout<<"Enter upper limit: ";
    cin>>n;

    cout<<"All Strong numbers between 1 to "<<n<<" are:\n";
    
    for(i=1; i<=n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            fact = 1ll;
            ld = temp % 10;

            for( j=1; j<=ld; j++)
            {
                fact = fact * j;
            }

            sum += fact;
            temp /= 10;
        }
        
        if(sum == i)
        {
            cout<<""<<i<<"\n";
        }
    }
    cout<<"\n\n";
    return 0;
}
