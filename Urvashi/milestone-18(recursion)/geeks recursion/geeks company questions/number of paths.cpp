#include <iostream>
using namespace std;

int no_of_paths(int n, int m)
{
	if (m == 1 || n == 1)
		return 1;
	else
		return no_of_paths(n - 1, m) + no_of_paths(n, m - 1);
}
int main()
{
	int t, m, n;
	cin >> t;
	while (t--)
	{
		cin >> m >> n;
		cout << no_of_paths(n, m);
	}
	return 0;
}
