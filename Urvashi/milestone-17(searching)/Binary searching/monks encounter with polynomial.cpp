#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int k, a, b, t, c, x;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> k;
		for (int x = 0; x < k; x++)
		{
			if (a * x * x + b * x + c >= k)
				break;
		}
		cout << x << endl;
	}
}
