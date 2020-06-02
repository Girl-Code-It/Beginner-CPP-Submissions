//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
#include <cmath>
using namespace std;;

int main()
{
//  Taking variable to store value which user will enter.
    int n;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to swap first and last digit of a number: \n\n";
    cout<<"Enter the number: ";
    cin>>n;

//  Simple math to get last digit.
    int temp = n, f=0, l;
    l = n % 10;
    int d = 0;
    
//  While loop to get first digit and digits count.
    while(temp != 0)
    {
        d++;
        f = temp;
        temp = temp/10;
    }
    
//  Calc. to get mid of the number and swapping of first and last digit.
    int mid = (n / 10) * 10 - f * pow(10, d-1);
    temp = l * pow(10, d-1) + mid + f;
    cout<<"Number after swapping first and last digit: "<<temp<<"\n\n\n";
    return 0;
}
