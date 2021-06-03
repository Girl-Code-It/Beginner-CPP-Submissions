/* Write a C program to print multiplication table of any number. */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n";
        cout << n << " * " << i << "=" << (n * i);
    }
    return 0;
}