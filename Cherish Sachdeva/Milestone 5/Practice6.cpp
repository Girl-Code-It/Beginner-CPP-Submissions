#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, rem, sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        b = i;
        while (b != 0)
        {
            rem = b % 10;
            sum += rem*rem*rem;
            b /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}