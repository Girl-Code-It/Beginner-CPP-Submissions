//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store values which user will enter and for in-program calculations.
    int sa,sy,b;
    
//  I/O Statements for a user friendly interface.
        cout<<"Hello Employees! A good news for you guys. Company is providing a 5% bonus to those employees who served more than 5 years for the company\n";
        cout<<"You can check your bonus amount by using this portal.\n\n\n";
        cout<<"Enter the number of years you served for the company: ";
        cin>>sy;
  
//  IF/ELSE Statement to compare which employee is eligible for the bonus and for how much.
    if(sy>=5)
    {
        cout<<"Congratulations! You are eligible for the bonus...!!!\n\n";
        cout<<"Enter your current salary to calculate your net bonus amount: ";
        cin>>sa;
        b=sa/20;
        cout<<"Your net bonus amount is: "<<b<<"\n\n\n";
    }
    else
    {
        cout<<"Sorry,You are not eligible for the bonus.\n\n\n";
    }
    return 0;
}
