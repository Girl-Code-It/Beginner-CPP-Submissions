// Take input of age of 3 people by user and determine oldest and youngest among them.
#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a1 > a2 && a1 > a3)
        cout << " a1 is the oldest";
    else if (a2 > a1 && a2 > a3)
        cout << " a2 is the oldest";
    else
        cout << " a3 is the oldest";
    if (a1 < a2 && a1 < a3)
        cout << " a1 is the youngest";
    else if (a2 < a1 && a2 < a3)
        cout << " a2 is the youngest";
    else
        cout << " a3 is the youngest";

    return 0;
}