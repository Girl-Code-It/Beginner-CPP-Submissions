#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int n, int k)
{
	if (k < arr[0])
		return -1;
	if (k >= arr[n - 1])
		return n - 1;

	int l = 0, r = n - 1;
	int mid = l + (r - l) / 2;

	while (l < r)
	{
		mid = l + (r - l) / 2;

		if (arr[mid] == k)
		{
			if (arr[mid + 1] != k)
				return mid;
			else
			{
				l = mid + 1;
			}
		}
		else if (arr[mid] < k)
		{
			l = mid + 1;
		}
		else if (arr[mid] > k)
		{
			r = mid - 1;
		}
	}

	return l;
}

void getRes(int arr[], int n, int k)
{
	int sum = 0;

	int index = bSearch(arr, n, k);

	if (index == -1)
	{
		cout << 0 << " " << 0 << endl;
		return;
	}

	for (int i = 0; i <= index; i++)
		sum += arr[i];

	cout << (index + 1) << " " << sum << endl;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	int testCases = 1;
	cin >> testCases;

	while (testCases-- > 0)
	{
		int k;
		cin >> k;
		getRes(arr, n, k);
	}
	return 0;
}