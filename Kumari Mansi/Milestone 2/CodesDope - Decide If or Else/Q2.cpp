//Q2: Take two int values from user and print greatest among them.
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
        cout << "Both are equal.";
    else if (x > y)
        cout << x << " is greater.";
    else
        cout << y << " is greater.";
    return 0;
}