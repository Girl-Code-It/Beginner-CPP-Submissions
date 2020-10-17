/* (https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/dhoom-4/description/)

Simple BFS solution

Time complexity:- O(N).
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 100000
# define ll long long

ll level[100005], a[100005];
bool vis[100005] = {false};
ll sk, lk, N, x, ans = 0, flag = 0;
queue<int> q;

int MinimumTime(ll sk, ll lk, ll *a, ll N)
{
    vis[sk] = true;
    level[sk] = 0;
    q.push(sk);
    while (!q.empty())
    {
        x = q.front();
        q.pop();
        for (ll i = 0; i < N; i++)
        {
            if (!vis[(x * a[i]) % mod])
            {
                level[(x * a[i]) % mod] = level[x] + 1;
                ans = level[x] + 1;

                if ((x * a[i]) % mod == lk)
                {
                    return ans;
                }
                q.push((x * a[i]) % mod);
                vis[(x * a[i]) % mod] = true;
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> sk >> lk >> N;
    for (ll i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout << MinimumTime(sk, lk, a, N);
}