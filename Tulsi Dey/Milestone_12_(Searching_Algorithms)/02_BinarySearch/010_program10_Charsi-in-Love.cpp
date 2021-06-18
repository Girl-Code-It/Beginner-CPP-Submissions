#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

int bSearch(vector<int> arr, int lo, int hi, int k)
{
    while (lo <= hi)
    {
        if (arr[hi] + arr[lo] > k)
        {
            hi--;
        }
        else if (arr[hi] + arr[lo] < k)
        {
            lo++;
        }
        else
        {
            return 1;
        }
    }
    return -1;
}
void solution()
{
    int n;
    cin >> n;

    int k = sqrt(2 * n);

    vector<int> arr;
    for (int i = 1; i <= k; i++)
    {
        arr.emplace_back((i * (i + 1)) / 2);
    }

    int size = arr.size();
    int res = bSearch(arr, 0, size - 1, n);

    if (res == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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