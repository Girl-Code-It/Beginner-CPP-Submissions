//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store value which user wil enter.
    float ch, ca;
    float per;
    char input;
    
//  I/O Statements for a user friendly interface.
    cout<<"Enter number of classes held: \n";
    cin>>ch;
    cout<<"Enter number of classes attended: \n";
    cin>>ca;
 
//  Simple calculation to check attendance percentage.
    per=(ca/ch)*100;
    cout<<"Your attendance is: "<<per<<"\n\n";
    
//  IF/ELSE Statement to check who should be asked for medical reason.
    if(per<75)
    {
        cout<<"Do you have any medical reason and certificate?\n\nPress Y for YES, N for NO\n\n";
        cin>>input;
        {
            if(input=='y')
            {
                cout<<"You are allowed to sit in exams, but you have to submit medical certificate to the concerned dept.\n\n";
            }
            else
            {
                cout<<"You are not allowed to sit in exams.\n\n";
            }
        }
        return 0;
    }
//  Default cout.
    cout<<"You are allowed to sit in exams.\n\n";
    
    return 0;
}
