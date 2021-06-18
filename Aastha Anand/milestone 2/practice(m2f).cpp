//Write a C program to find sum of all natural numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{   int n,s = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        s+= i;
    }

    cout << "Sum =" << s;
    return 0;
}
