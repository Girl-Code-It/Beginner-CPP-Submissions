#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	cout << "enter the number of rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= 6 - i; j++)
		{
			cout << i;
		}
		for (j = 6 - i; j <= n; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
}
