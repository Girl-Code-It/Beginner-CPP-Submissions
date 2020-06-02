#include <iostream>
using namespace std;
void perfect (int n)
{
    int sum = 0;
    for (int k = 1; k < n; k++)
    {
        if (n % k == 0)
        {
            sum = sum + k;
        }
    }
    if ( sum == n)
    {
        cout << n;
        cout << "\n";
    }
}
int main ()
{
    cout << "Perfect numbers between 1-1000 are:\n";
    for (int n = 1; n <= 1000; n++)
    {
        perfect (n);
    }
}
