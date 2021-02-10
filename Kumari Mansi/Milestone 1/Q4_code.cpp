
/* Q4: Write a program to check whether a number is negative, zero, positive.  */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a integer number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "This number is zero.";
    }
    else if (num > 0)
    {
        cout << "This is a positive number.";
    }
    else
    {
        cout << "This is a negative number.";
    }

    return 0;
}