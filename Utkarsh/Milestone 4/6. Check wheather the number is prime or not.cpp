//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
        int i, num, pr;
        pr = 1;
        cout<<"Enter any number to check prime: ";
        cin>>num;

        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                pr = 0;
                break; 
            }
        }

        if(pr == 1 && num > 1)
        {
            cout<<""<<num<<" is a prime number\n\n";
        }
        else
        {
            cout<<""<<num<<" is a composite number\n\n";
        }

        return 0;
    }
