#include <iostream>
using namespace std;
int main(){
    int TotalCost, Quantity;
    cout << "Enter the quantity : ";
    cin >> Quantity;
    if((Quantity*100)> 1000)
        TotalCost = Quantity * 100 * 0.9;
    else 
        TotalCost = Quantity * 100;

    cout << "The total cost is : " << TotalCost;
    return 0;
}