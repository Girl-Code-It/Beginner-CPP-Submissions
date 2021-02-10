#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;
int bSearch(vector<double> arr, int lo, int hi, int k)
{
    int res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] >= k)
        {
            hi = mid - 1;
        }
        else if (arr[mid] < k)
        {
            res = mid;
            lo = mid + 1;
        }
    }
    return res;
}
void solution()
{
    int n;
    cin >> n;
    vector<double> v(n);
    vector<double> arr(n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        arr[i] = sum / (double)(i + 1);
    }

    int q;
    cin >> q;

    while (q-- > 0)
    {
        double x;
        cin >> x;

        auto res = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        cout << (res) << endl;
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
