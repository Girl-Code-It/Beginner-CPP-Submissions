#include <bits/stdc++.h>
using namespace std;
int binsearch(int a[], int n, int x)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (x == a[mid])
			return mid;
		else if (x <= a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int main()
{
	long long int k, q, n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> q;
	while (q--)
	{
		int sum = 0;
		cin >> k;
		int index = binsearch(a, n, k);
		for (int i = 0; i < index; i++)
		{
			sum += a[i];
			if (sum < k)
				return sum;
		}
		if (index != -1)
			cout << "0" << endl;
		else
			cout << sum << endl;
	}
}
