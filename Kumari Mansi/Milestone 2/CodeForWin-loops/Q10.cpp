/* Write a C program to count number of digits in a number. */
#include <iostream>
using namespace std;
int main()
{
    int n, r, q, digit = 0;
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        digit++;
        q = n / 10;
        n = q;
    }
    cout << "number of digits=" << digit;
    return 0;
}