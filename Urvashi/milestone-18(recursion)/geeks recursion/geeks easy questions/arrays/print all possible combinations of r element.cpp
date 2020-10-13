#include <iostream>
using namespace std;
void combinationsUtil(int *a, int *data, int r, int index, int start, int end)
{
	if (index == r)
	{
		for (int j = 0; j < r; j++)
			cout << data[j] << " ";
		cout << endl;
		return;
	}
	for (int i = start; i <= end && end - i + 1 >= r - index; i++)
	{
		data[index] = a[i];
		combinationsUtil(a, data, r, index + 1, i + 1, end);
	}
}
void combinations(int *a, int n, int r)
{
	int data[r];
	combinationsUtil(a, data, r, 0, 0, n - 1);
}
int main()
{
	int n, r;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> r;
	combinations(a, n, r);
}
