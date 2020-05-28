//  Created by Utkarsh Thakur on 14/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
//  Taking given variables ATQ.
    int x=2,y=5,z=0;
    
//  IF/ELSE Statement to check the values as give ATQ.
    if(x==2)
    {
        cout<<"TRUE\n";
    }
    if(x!=5)
    {
        cout<<"TRUE\n";
    }
    if(x != 5 && y >= 5)
    {
        cout<<"TRUE\n";
    }
    if(z != 0 || x == 2)
    {
        cout<<"TRUE\n";
    }
    if(!(y < 10))
    {
        cout<<"FLASE\n";
    }
    else
    {
        cout<<"FINISHED\n\n";
    }
    return 0;
}
  
