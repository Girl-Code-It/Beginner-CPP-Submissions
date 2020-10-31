#include <stdio.h>
int main()
{
	long long n, q, m;
	scanf("%d%d", &n, &q);
	int a[n];
	long int sum[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sum[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		sum[i] = sum[i - 1] + a[i];
	}
	while (q--)
	{
		scanf("%d", &m);
		;
		long long l = 0, h = n - 1, mid, ans;
		while (l <= h)
		{
			mid = l + (h - l) / 2;
			if (sum[mid] >= m && sum[mid - 1] < m)
			{
				break;
			}
			else if (sum[mid] < m)
				l = mid + 1;
			else
				h = mid - 1;
		}
		printf("%d\n", mid + 1);
	}
}
