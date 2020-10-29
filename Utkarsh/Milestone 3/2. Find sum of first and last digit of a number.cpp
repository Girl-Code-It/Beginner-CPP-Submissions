//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;;

int main()
{
//  Taking variable to store value which user will enter.
    int n,s,a,b;
    
//  I/O Statements for a user friendly interface.
    cout<<"Program to find first and last digit of a number: \n\n";
    cout<<"Enter the number: ";
    cin>>n;
    
//  WHILE Loop to find first digit.
      {
          int fd;
          fd=n;
        while(fd>=10)
        {
            fd=fd/10;
        }
        cout<<"\n\nFirst digit: "<<fd<<"\n";
          a=fd;
      }

//   Simple maths within seperate part to get first digit
      {
        int ld;
        ld = n % 10;
        cout<<"Last digit: "<<ld<<"\n\n";
          b=ld;
      }
    s=a+b;
    cout<<"Sum of first and last digit is: "<<s<<"\n\n";
    return 0;
}
