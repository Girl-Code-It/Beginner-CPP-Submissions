#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

bool lSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            return true;
    }
    return false;
}
void getRes()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int c[m];
    for (int i = 0; i < m; i++)
        cin >> c[i];

    set<int> b;
    bool check = 1;

    for (int i = 0; i <= 100; i++)
    {
        check = 1;
        for (int j = 0; j < n; j++)
        {
            int k = i + a[j];

            check *= lSearch(c, m, k);
        }
        if (check)
            b.insert(i);
    }

    for (auto it = b.begin(); it != b.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{

    int testCases = 1;
    //cin>>testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}