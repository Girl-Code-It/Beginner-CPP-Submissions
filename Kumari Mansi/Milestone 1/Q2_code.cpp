
/* Q2: Write a program to print a maximum of two numbers */
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 2 numbers=";
    cin >> x >> y;
    if (x == y)
    {
        cout << "Both are equal.";
    }

    else if (x > y)
    {
        cout << x << " is maximum.";
    }

    else
    {
        cout << y << " is maximum.";
    }
    return 0;
}