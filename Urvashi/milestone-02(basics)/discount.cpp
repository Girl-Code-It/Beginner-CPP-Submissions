#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the purchased quantity" << endl;
    cin >> a;
    (a * 100 > 1000) ? cout << "you will get a discount of 10% and ur total cost is  " << (a * 100 - 10 * a) : cout << "you will not get any discount and u have to pay  " << a * 100;
}
