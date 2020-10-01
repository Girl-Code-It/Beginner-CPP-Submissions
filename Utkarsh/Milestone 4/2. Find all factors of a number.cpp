//  Created by Utkarsh Thakur on 04/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    
    cout<<"All factors of "<<n<<" is: ";
    
    for(i=1; i<=n; i++)
    {
       
// If num is exactly divisible by i
// Then i is a factor of num
        
        if(n % i == 0)
        {
            cout<<""<<i<<"";
            cout<<", ";
        }
    }
    cout<<"\n\n";
    return 0;
}
