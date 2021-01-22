#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

void solution()
{
    int n, c = 0;
    cin >> n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {

        int a[3] = {0};
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        int v = a[0] * 100 + a[1] * 10 + a[2] * 1;

        if (mp.find(v) != mp.end())
        {
            mp[v]++;
        }

        mp.insert(pair<int, int>(v, 1));
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 1)
        {
            c++;
        }
    }

    cout << c << endl;
}

int32_t main()
{
    int testCases = 1;
    // cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}