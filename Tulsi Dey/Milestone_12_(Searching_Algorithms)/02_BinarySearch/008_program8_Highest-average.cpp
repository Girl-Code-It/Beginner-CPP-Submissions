#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

int bSearch(int arr[], int lo, int hi, int k)
{
    int res = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] < k)
        {
            res = mid + 1;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return res;
}
void solution()
{
    int n;
    cin >> n;
    int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        arr[i + 1] += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / (i + 1);
    }

    int q;
    cin >> q;

    while (q-- > 0)
    {
        int k;
        cin >> k;

        int res = bSearch(arr, 0, n - 1, k);

        cout << res << endl;
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