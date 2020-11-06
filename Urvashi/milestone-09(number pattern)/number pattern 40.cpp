#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	cout << "enter the rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % 2 == 0)
				cout << 2 * j;
			else
				cout << 2 * j - 1;
		}
		cout << "\n";
	}
}
