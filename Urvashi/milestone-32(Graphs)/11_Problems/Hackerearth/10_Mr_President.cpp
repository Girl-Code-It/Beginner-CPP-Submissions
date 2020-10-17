/* (https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/practice-problems/algorithm/mr-president/)

Kruskal Algorithm
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> parent, sz;
ll find(ll i)
{
    if (i == parent[i])
        return i;
    return parent[i] = find(parent[i]);
}

ll Union(ll a, ll b)
{
    ll x = find(a);
    ll y = find(b);
    if (x == y)
        return -1;
    if (sz[x] <= sz[y])
    {
        parent[y] = x;
        sz[x] = sz[x] + sz[y];
        return x;
    }
    parent[x] = y;
    sz[y] = sz[x] + sz[y];
    return y;
}
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a, b, c;
    parent = vector<ll>(n + 1);
    sz = vector<ll>(n + 1, 1);
    vector<pair<ll, pair<ll, ll>>> edges;
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    for (ll i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        edges.push_back({c, {a, b}});
    }
    sort(edges.begin(), edges.end());
    vector<ll> idxs;
    ll expense = 0;
    ll cnt = 0;
    for (ll i = 0; i < m; i++)
    {
        ll x = edges[i].second.first;
        ll y = edges[i].second.second;
        ll c = edges[i].first;
        if (find(x) == find(y))
        {
            continue;
        }
        cnt++;
        Union(x, y);
        expense = expense + c;
        idxs.push_back(i);
        if (cnt == n - 1)
            break;
    }
    if (cnt < n - 1)
    {
        cout << -1 << "\n";
        return 0;
    }
    ll curr = idxs.size() - 1, ans = 0;
    while (expense > k && curr >= 0)
    {
        ans++;
        expense = expense - edges[idxs[curr]].first + 1;
        curr--;
    }
    if (expense > k)
    {
        cout << -1 << "\n";
        return 0;
    }
    cout << ans << "\n";
    return 0;
}