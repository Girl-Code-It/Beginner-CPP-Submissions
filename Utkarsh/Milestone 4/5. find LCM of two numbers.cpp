//  Created by Utkarsh Thakur on 05/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int num1=1, num2=1,i, max,lcm=1;
    
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    
    max = (num1 > num2) ? num1 : num2;
    i = max;
    
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;

            break;
        }

        i += max;
    }

    cout<<"LCM of entered numbers are "<<lcm<<"\n\n";
    return 0;
}
