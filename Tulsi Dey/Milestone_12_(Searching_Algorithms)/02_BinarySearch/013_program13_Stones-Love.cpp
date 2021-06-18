#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;
#define supafast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;

int bSearch(int arr[], int lo, int hi, int k)
{
    int res = -1;
    while(lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        if (arr[mid] < k)
        {
            lo = mid + 1;
        }
        else if (arr[mid] >= k)
        {
            res = mid;
            hi = mid - 1;
        }
    }
    return res;
}
void solution()
{
    int n, q;
    cin >> n >> q;
    int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 1] += arr[i];
    }

    while (q-- > 0)
    {
        int k;
        cin >> k;

        int res = bSearch(arr, 0, n - 1, k);

        cout << (res+1) << endl;
    }
}

int32_t main()
{
    supafast

    int testCases = 1;
    // cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}