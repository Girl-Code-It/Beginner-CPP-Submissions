/*
A shop will give discount of 10% if the cost of purchased quantity 
is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.

*/
#include <iostream>

using namespace std;
int main()
{
    int cost = 100, units, total;
    cout<<"Enter no. of units: ";
    cin>>units;

    total = units*cost;
    if(total > 1000)
    total = total*0.9;

    cout<<"Total cost : "<<total;
    return 0;
}