#include <bits/stdc++.h>
using namespace std;

int main()
{
  std::cin.sync_with_stdio(false);
  int n, q, dec, x, l, r;
  cin >> n >> q;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  while (q--)
  {

    cin >> dec;
    if (dec == 1)
    {
      cin >> x;
      a[x - 1] = (a[x - 1] == 0) ? 1 : 0;
    }
    else
    {
      cin >> l >> r;
      a[r - 1] == 0 ? printf("EVEN\n") : printf("ODD\n");
    }
  }
}
