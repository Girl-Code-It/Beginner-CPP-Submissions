#include <iostream>
#include <math.h>
using namespace std;
void bubbleSort(int *a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i; j < n - i - 1; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int minsum(int *a, int n, int m)
{
	int mins = 0;
	for (int i = 0; i < n - m; i++)
		mins += a[i];
	return mins;
}
int maxsum(int *a, int n, int m)
{
	int maxs = 0;
	for (int i = m; i < n; i++)
		maxs += a[i];
	return maxs;
}
int main()
{
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		bubbleSort(a, n);
		int min = minsum(a, n, m);
		int max = maxsum(a, n, m);
		int diff = abs(max - min);
		cout << diff << endl;
	}
}
