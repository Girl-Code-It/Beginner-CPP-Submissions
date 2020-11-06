#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, k = 1;
	cout << "enter the number of rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = i; j > 1; j--)
		{
			cout << j;
		}
		for (j = 1; j <= 6 - i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
