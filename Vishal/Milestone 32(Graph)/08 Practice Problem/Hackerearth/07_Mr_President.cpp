// https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/practice-problems/algorithm/mr-president/

#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, pair<int, int>>> v;
vector<long long> weights;
vector<int> parent;
vector<int> Rank;

void initialize()
{
    parent.resize(n + 1);
    Rank.resize(n + 1, 1);
    for (int i = 0; i <= n; i++)
        parent[i] = i;
}

int find(int i)
{
    if (i == parent[i])
        return i;

    return parent[i] = find(parent[i]);
}

void makeunion(int rx, int ry)
{
    if (Rank[rx] > Rank[ry])
        parent[ry] = rx;
    else if (Rank[rx] < Rank[ry])
        parent[rx] = ry;
    else
    {
        parent[rx] = ry;
        Rank[ry] += 1;
    }
}

int main()
{
    int x, y, w, n, m;
    long long k, cost;
    cin >> n >> m >> k;
    initialize();

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        v.push_back({w, {x, y}});
    }

    sort(v.begin(), v.end());

    // Kruskals Algo
    for (int i = 0; i < m; i++)
    {
        long long w = v[i].first;
        int rx = find(v[i].second.first);
        int ry = find(v[i].second.second);

        if (rx != ry)
        {
            makeunion(rx, ry);
            cost += w;
            weights.push_back(w);
        }
    }

    if (weights.size() != n - 1)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(weights.begin(), weights.end());
    int ans = 0;
    while (cost > k && ans < n - 1)
    {
        cost -= weights[n - 2 - ans];
        cost++;
        ans++;
    }

    if (cost > k)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}