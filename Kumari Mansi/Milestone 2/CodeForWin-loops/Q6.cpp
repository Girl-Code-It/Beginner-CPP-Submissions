/* Write a  program to find sum of all natural numbers between 1 to n.*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, n;
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "\nsum of all natural numbers between 1 to " << n << " is: " << sum;
    return 0;
}