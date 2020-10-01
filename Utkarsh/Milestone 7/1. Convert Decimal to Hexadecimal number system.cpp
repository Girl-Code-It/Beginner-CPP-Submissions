//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    char HV[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long d, td;
    char hex[65];
    int i, r;
    
    cout<<"Enter any decimal number: ";
    cin>>d;
   
    td = d;
    i = 0;
    
    while(td !=0)
    {
        r = td % 16;
        hex[i] = HV[r];
        td /= 16;
        i++;
    }
    
    hex[i] = '\0';
    
    string str(hex);
    reverse(str.begin(), str.end());

    cout<<"Decimal number = "<<d<<"\n";
    cout<<"Hexadecimal number = "<<str<<"\n\n";
    return 0;
}
