#include <iostream>
using namespace std;

int floor_value(int *arr, int n, int x)
{
	static int i = 0;
	if (i == n)
		return arr[n - 1];
	else if (arr[i - 1] < x && arr[i] >= x)
	{
		return arr[i - 1];
	}
	i++;
	floor_value(arr, n, x);
}
int main()
{
	int n, x;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	cout << floor_value(a, n, x);
}
