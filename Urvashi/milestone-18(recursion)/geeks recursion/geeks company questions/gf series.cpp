#include <iostream>
using namespace std;

void gf_series(int n, int i)
{
	int a[n];

	a[0] = 0, a[1] = 1;
	if (i == n)
		return;
	if (i == 0)
		cout << a[0] << " ";
	if (i == 1)
		cout << a[1] << " ";
	else
	{
		cout << a[i - 2] * a[i - 1] - a[i - 1] << " ";
	}
	i++;
	gf_series(n, i);
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		gf_series(n, 0);
	}
}
