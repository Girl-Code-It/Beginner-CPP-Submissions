//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking variable to store the value which user will enter.
    int mark;
    
//  I/O Statements for a user friendly interface.
    cout<<"Welcome to school grading system. Students/Parents can check their corresponding grades by entering the marks.\n\n";
    cout<<"Enter your marks: ";
    cin>>mark;

//  IF/ELSE Statement to check the grade by the marks entered.
    if(mark<=25)
    {
        cout<<"Your Grade is: F\n\n\n";
    }
    else if(mark<=45)
    {
        cout<<"Your Grade is: E\n\n\n";
    }
    else if(mark<=50)
    {
        cout<<"Your Grade is: D\n\n\n";
    }
    else if(mark<=60)
    {
        cout<<"Your Grade is: C\n\n\n";
    }
    else if(mark<=80)
    {
        cout<<"Your Grade is: B\n\n\n";
    }
    else if(mark>80)
    {
        cout<<"Your Grade is: A\n\n\n";
    }
    return 0;
}
