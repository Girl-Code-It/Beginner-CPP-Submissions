#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, k;
	cout << "enter the number of rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}
