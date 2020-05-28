//  Created by Utkarsh Thakur on 16/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <stdio.h>
#define BASE 10

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

//  Input number from user
    cout<<"Enter any number: ";
    cin>>num;

//  Initialize frequency array with 0
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

//  Copy the value of 'num' to 'n'
    n = num;

//  Run till 'n' is not equal to zero
    while(n != 0)
    {
//      Get last digit
        lastDigit = n % 10;

//      Remove last digit
        n /= 10;

//      Increment frequency array
        freq[lastDigit]++;
    }

//  Print frequency of each digit
    cout<<"Frequency of each digit in %lld is: \n";
    for(i=0; i<BASE; i++)
    {
        cout<<"Frequency of "<<i<<" = "<<freq[i]"\n";
    }

    return 0;
}
