#include <bits/stdc++.h>
using namespace std;

#define int long long
#define deb(x) cout << #x << " = " << x << endl;
#define endl "\n"

const int MOD = 1e9 + 7;

void solution()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.length(), n2 = s2.length(), k = 0, mark = 1;

    for (int i = 0; i < n2; i++)
    {
        if (k == n1)
        {
            mark = 0;
            break;
        }
        if (s1[k] == s2[i])
        {
            k++;
        }
    }

    if (k == n1)
    {
        mark = 0;
    }

    if (!mark)
        cout << "Love you too" << endl;
    else
        cout << "We are only friends" << endl;
}

int32_t main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}