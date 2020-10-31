#include <iostream>
using namespace std;
int largest_element(int *a, int n)
{
	static int max = -9999;
	static int i = 0;
	if (i < n)
	{
		if (max < a[i])
			max = a[i];
		i++;
		largest_element(a, n);
	}
	return max;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << largest_element(a, n);
}
