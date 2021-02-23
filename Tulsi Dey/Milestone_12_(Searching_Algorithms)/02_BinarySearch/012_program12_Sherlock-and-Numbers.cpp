#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

void solution()
{
    int n, k, p;
    cin >> n >> k >> p;

    for (int i = 0; i < k; i++)
    {
        int inp;
        cin >> inp;

        if (inp <= p)
            p++;
    }

    if (p > n)
        cout << -1 << endl;
    else
        cout << p << endl;
}

int32_t main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}