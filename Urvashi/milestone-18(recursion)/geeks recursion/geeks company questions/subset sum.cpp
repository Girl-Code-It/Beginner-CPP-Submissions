#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void subset_sum(int *a, int left, int right, int sum = 0)
{

	int n = sizeof(a) / sizeof(a[0]);
	if (left > right)
	{
		cout << sum << " ";
		return;
	}
	//subset including a[left]..
	subset_sum(a, left + 1, right, sum + a[left]);
	sort(a, a + n);
	//subset excluding a[left]..
	subset_sum(a, left + 1, right, sum);
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		(subset_sum(a, 0, n - 1));
		cout << endl;
	}
}
