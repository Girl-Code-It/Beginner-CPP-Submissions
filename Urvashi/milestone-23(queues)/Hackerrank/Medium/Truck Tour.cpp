#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
#define get(x) (oil[x] - dis[x])

lli oil[100000 + 10];
lli dis[100000 + 10];
queue<int> Q;
int n;

int main(void)
{
  int i, j, k, kase = 0;
  cin >> n;

  for (i = 0; i < n; i++)
    cin >> oil[i] >> dis[i];

  while (!Q.empty())
    Q.pop();

  Q.push(0);

  lli sum = 0;
  int id = 0;

  while (Q.size() < n)
  {
    id = Q.back();
    sum += get(id);
    while (sum < 0 && !Q.empty())
      Q.pop();
    if (Q.empty())
      sum = 0;
    Q.push((id + 1) % n);
  }
  printf("%d\n", Q.front());

  return 0;
}
