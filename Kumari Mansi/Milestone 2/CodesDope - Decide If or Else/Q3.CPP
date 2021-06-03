/*Q3: A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include <iostream>
using namespace std;
int main()
{
    int q, cost;
    float total;
    cin >> q;
    cost = q * 100;
    if (cost > 1000)
    {
        total = (cost - (cost) / 10);
        cout << total << " after getting discount of 10%";
        return 0;
    }
    cout << cost;
    return 0;
}
