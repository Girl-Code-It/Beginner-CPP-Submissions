//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store the value which user will enter and for in-program use.
    int age1,age2,age3;
    
//  I/O Statements for a user friendly interface.
    cout<<"Comparing age of 3 people and finding max and min age among them...\n\n";
    cout<<"Enter age of first person: ";
    cin>>age1;
    cout<<"Enter age of second person: ";
    cin>>age2;
    cout<<"Enter age of third person: ";
    cin>>age3;
    
//  IF/ELSE Statement to compare the age.
    //finding the oldest one
    if(age1 > age2 && age1 > age3)
    {
        cout<<"The biggest age is "<<age1<<"\n\n";
    }
    else if(age2 > age1 && age2 > age3)
    {
        cout<<"The biggest age is "<<age2<<"\n\n";
    }
    else if(age3 > age1 && age3 > age2)
    {
        cout<<"The biggest age is "<<age3<<"\n\n";
    }
    //finding the youngest one
    if(age1 < age2 && age1 < age3)
    {
        cout<<"The lesser age is "<<age1<<"\n\n";
    }
    else if(age2 < age1 && age2 < age3)
    {
        cout<<"The lesser age is "<<age2<<"\n\n";
    }
    else if(age3 < age1 && age3 < age1)
    {
        cout<<"The lesser age is "<<age3<<"\n\n";
    }
        
    return 0;
}
