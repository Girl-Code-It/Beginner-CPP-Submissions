//Q1: Take values of length and breadth of a rectangle from user and check if it is square or not.
#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cin >> length >> breadth;
    if (length == breadth)
        cout << "It's a square";
    else
        cout << "It's a rectangle not square";
    return 0;
}
