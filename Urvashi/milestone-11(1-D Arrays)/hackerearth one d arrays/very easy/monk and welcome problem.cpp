#include <iostream>
using namespace std;
int main()
{
	std::cin.sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i] + b[i];
		cout << a[i] << " ";
	}
}
