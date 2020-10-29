//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.

using namespace std;
#include<iostream>

int main()
{
    int qty;
    float total;

    cout<<"\n Enter quantity required :";
    cin>>qty;

    if(qty>1000){
        total=(100*qty)*0.1;
        cout<<"\n Congratulations,You get a discount of 10%";
    }
    else{
        cout<<"\n No,Discount";
        total=100*qty;
    }

    cout<<"\n Total cost="<<total;

    return 0;
}
