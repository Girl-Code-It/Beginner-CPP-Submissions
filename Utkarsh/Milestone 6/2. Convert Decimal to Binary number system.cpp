//  Created by Utkarsh Thakur on 11/06/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
   long long d, td, b;
   int r, p = 1;

   b = 0;

   cout<<"Enter any Decimal number: ";
   cin>>d;

   td = d;

   while(td > 0)
   {
       r = td % 2;
       b = (r * p) + b;
       td /= 2;
       p *= 10;
   }

   cout<<"Decimal number = "<<d<<"\n";
   cout<<"Binary number = "<<b<<"\n\n";
   return 0;
}
