#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	cout << "enter the rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i * 2 - 1; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
