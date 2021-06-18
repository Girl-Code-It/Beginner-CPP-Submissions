/*Write a program to find sum of all even numbers between 1 to n.*/
#include <iostream>
using namespace std;
int main()
{
    int i = 2, sum = 0, n;
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    cout << "\nsum of all even numbers between 1 to " << n << " is: " << sum;
    return 0;
}