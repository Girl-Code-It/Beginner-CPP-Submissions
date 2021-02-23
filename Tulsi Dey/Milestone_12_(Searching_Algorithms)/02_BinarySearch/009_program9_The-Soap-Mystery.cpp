#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

int bSearch(int arr[], int lo, int hi, int k)
{
    if (k < arr[lo])
        return -1;
    else if (k > arr[hi])
        return hi;
    int res = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] < k)
        {
            res = mid;
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
    int arr[100000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int q;
    cin >> q;
    while (q-- > 0)
    {
        int k;
        cin >> k;

        int res = bSearch(arr, 0, n - 1, k);

        cout << (res + 1) << endl;
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