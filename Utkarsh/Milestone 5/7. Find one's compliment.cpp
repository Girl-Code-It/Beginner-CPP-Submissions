//  Created by Utkarsh Thakur on 10/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;
#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;

    cout<<"Enter "<<SIZE<<" bit binary value: ";
    cin>>binary;
    
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            cout<<"Invalid Input";
            error = 1;

            break;
        }
    }
    onesComp[SIZE] = '\0';

    if(error == 0)
    {
        cout<<"Original binary = "<<binary<<"\n";
        cout<<"Ones complement = "<<onesComp<<"\n\n";
    }
    return 0;
}
