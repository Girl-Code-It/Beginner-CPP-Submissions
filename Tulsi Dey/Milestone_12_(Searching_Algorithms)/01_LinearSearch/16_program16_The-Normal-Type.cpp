#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

void getRes()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    arr.reserve(n);
    set<ll> set1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        set1.insert(arr[i]);
    }
    ll dist_n = set1.size();
    map<ll, ll> mp;
    set<ll> s;

    ll index = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        while (index < n && s.size() < dist_n)
        {
            mp[arr[index]]++;
            s.insert(arr[index]);
            index++;
        }
        if (s.size() == dist_n)
        {
            c += n - index + 1;
        }

        mp[arr[i]]--;

        if (mp[arr[i]] == 0)
        {
            s.erase(arr[i]);
        }
    }

    cout << c << endl;
}

int main()
{
    int testCases = 1;
    // cin>>testCases;

    while (testCases--> 0)
    {
        getRes();
    }
    return 0;
}