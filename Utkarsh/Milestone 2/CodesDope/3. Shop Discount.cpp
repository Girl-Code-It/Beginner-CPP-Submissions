//  Created by Utkarsh Thakur on 13/05/20.
//  Copyright © 2020 Utkarsh Thakur. All rights reserved.


#include <iostream>
using namespace std;

int main()
{
//  Taking variables to store values which user will enter.
    int q,tp,fp;
    
//  I/O Statements for a user friendly interface.
    cout<<"WELCOME TO OUR SHOP, WE OFFER 10% DISCOUNT IF THE TOTAL AMOUNT EXCEEDS 1000 BUCKS\n";
    cout<<"PRICE PER QUANTITY IS 100 BUCKS\n\n";
    cout<<"Enter the quantity you want to purchase: ";
    cin>>q;

//  Calculating Total Price.
    tp=q*100;

//  IF/ELSE Statement to check the purchase is eligible for discount and to calculate final price.
    if (tp>=1000)
    {
    cout<<"\n\nHURRRAYYY!  Your purchase is eligible for discount...!!!\n";
        fp=tp - (tp/10);
    cout<<"Your final price after discount is: "<<fp<<"\n\n";
    }
    
    else
    {
    cout<<"Sorry, your purchse is not eligible for discount, but don't worry, next time we will try to provide another offer.\n\n";
    cout<<"Your final price is: "<<tp<<"\n\n";
    }
    return 0;
}
