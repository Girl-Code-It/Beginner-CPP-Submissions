#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;


int a, b, k1, k2, m;

#define fun(x) a*pow(x,k1) + b*pow(x,k2)
#define supafast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
int l, h;
int bSearch(int lo, int hi, int k)
{
    int res = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (fun(mid) > k)
        {
            hi = mid - 1;
        }
        else if (fun(mid) <= k)
        {
            res = mid;
            lo = mid + 1;
        }
    }
    return res;
}

void solution()
{
    cin >> a >> b >> k1 >> k2 >> m;

    int res = bSearch(0,1000000,m);

    if(res >= 100000)
    {
        cout << "Love is immortal" << endl;
    }
    else
    {
        cout << res << endl;
    }
}

int32_t main()
{
    supafast

    int testCases = 1;
    cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}