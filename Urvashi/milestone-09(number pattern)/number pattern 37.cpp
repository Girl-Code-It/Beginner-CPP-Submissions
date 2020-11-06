#include <iostream>
using namespace std;
int main()
{
	int i, j, k, m, n;
	cout << "enter the rows and columns:";
	cin >> m >> n;
	k = 1;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++, k++)
		{
			if (k % 2 == 1)
				cout << "1";
			else
				cout << "0";
		}
		cout << "\n";
	}
}
