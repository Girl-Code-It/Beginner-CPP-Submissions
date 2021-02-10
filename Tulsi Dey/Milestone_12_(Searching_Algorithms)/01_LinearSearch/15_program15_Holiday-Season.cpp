#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

void getRes()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll alpha[26] = {0}, ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                ans += c;
            }

            c += alpha[s[j] - 'a'];
        }
        alpha[s[i] - 'a']++;
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