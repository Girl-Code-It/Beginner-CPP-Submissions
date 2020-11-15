#include <iostream>
using namespace std;
void sumtriangle(int *a, int n)
{
	if (n < 1)
		return;
	int temp[n - 1];
	for (int i = 0; i < n; i++)
	{
		int x = a[i] + a[i + 1];
		temp[i] = x;
	}
	sumtriangle(temp, n - 1);
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << a[i] << " ";
		else
			cout << a[i] << ",";
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sumtriangle(a, n);
}
