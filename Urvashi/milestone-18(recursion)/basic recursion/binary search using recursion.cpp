#include <iostream>
using namespace std;
int binary_search(int *a, int n, int low, int num, int high)
{
	int count = 0;
	if (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (a[mid] == num)
			count = 1;
		else if (a[mid] > num)
			return binary_search(a, n, low, num, mid - 1);
		else
			return binary_search(a, n, mid + 1, num, high);
	}
	return count;
}
int main()
{
	int n, num, low, high;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> num;
	low = 0, high = n - 1;
	int c = binary_search(a, n, low, num, high);
	if (c == 0)
		cout << "not found";
	else
		cout << "found";
}
