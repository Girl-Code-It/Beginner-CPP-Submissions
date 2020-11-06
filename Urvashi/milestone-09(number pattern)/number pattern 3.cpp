#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	cout << "enter the number of rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j % 2 == 0)
				cout << "1";
			else
				cout << "0";
		}
		cout << "\n";
	}
}
