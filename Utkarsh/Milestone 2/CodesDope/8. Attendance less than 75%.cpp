//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user wil enter.
    int ch, ca;
    float per;
    
//  I/O Statements for a user friendly interface.
    cout<<"Enter number of classes held: ";
    cin>>ch;
    cout<<"Enter number of classes attended: ";
    cin>>ca;
 
//  Simple calculation to check attendance percentage.
    per=(ca/ch)*100;

//  IF/ELSE Statement to check who is allowed to sit in exams.
    if(per>=75)
    {
        cout<<"You are allowed to sit in exams.\n\n";
    }
    else
    {
        cout<<"You are not allowed to sit in exams.\n\n";
    }
    return 0;
}
