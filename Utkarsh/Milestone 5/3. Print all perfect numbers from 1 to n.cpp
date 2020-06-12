//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, sum;

       cout<<"Enter upper limit: ";
       cin>>n;

       cout<<"All Perfect numbers between 1 to "<<n<<":\n";
       
       for(i=1; i<=n; i++)
       {
           sum = 0;

           for(j=1; j<i; j++)
           {
               if(i % j == 0)
               {
                   sum += j;
               }
           }
    
           if(sum == i)
           {
               cout<<""<<i<<", ";
           }
       }
    cout<<"\n\n";
    return 0;
}
