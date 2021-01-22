#include <bits/stdc++.h>
using namespace std;

#define ll long long

void getRes()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll sum, i, j;

    if (a >= b)
    {
        i = round((n * b * 1.0) / (a + b));
        j = n - i;
    }
    else
    {
        j = round((n * a * 1.0) / (a + b));
        i = n - j;
    }

    sum = a * i * i + b * j * j;

    cout << sum << endl;
}

int main()
{
    int testCases = 1;
    cin >> testCases;

    while (testCases-- > 0)
    {

        getRes();
    }
    return 0;
}
