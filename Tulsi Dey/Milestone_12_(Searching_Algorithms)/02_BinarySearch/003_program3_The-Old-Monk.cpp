#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

ll bSearch(ll b[], ll n, ll k, ll i)
{
    if (b[i] < k)
        return 0;
    ll l = 0, r = n - 1;
    ll mid = l + (r - l) / 2;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (b[mid] >= k)
        {
            if (b[mid + 1] >= k)
                l = mid + 1;
            else
                return mid;
        }
        if (b[mid] < k)
        {
            r = mid - 1;
        }
    }
    return -1;
}
void getRes()
{
    ll n;
    cin >> n;
    ll arr[n+1] = {0}, brr[n+1] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> brr[i];

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        ll j = bSearch(brr, n, arr[i], i);
        // if(j >= i){ deb(brr[j]) deb(arr[i])}
        if (arr[i] <= brr[j] && j >= i)
        {
            res = max(res, j - i);
        }
    }
    cout << res << endl;
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