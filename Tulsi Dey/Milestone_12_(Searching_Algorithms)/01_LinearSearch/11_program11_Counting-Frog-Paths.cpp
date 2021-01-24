#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

void getRes()
{
    int x, y, s, t;
    cin >> x >> y >> s >> t;

    int ans = 0;

    for (int i = x; i <= x + s; i++)
    {
        for (int j = y; j <= y + s; j++)
        {
            if (i + j <= t)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main()
{

    int testCases = 1;
    // cin>>testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}