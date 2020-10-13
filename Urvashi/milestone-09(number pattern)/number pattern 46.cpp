#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, k;
	cout << "enter the rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		k = i;
		for (j = 1; j <= i; j++)
		{
			if ((i % 2) == 1)
			{
				cout << j;
			}
			else
			{
				cout << k;
				k--;
			}
		}
		cout << "\n";
	}
}
