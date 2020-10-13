#include <iostream>
using namespace std;
int main()
{
	int i, j, m;
	cout << "enter the rows :";
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i * 2 - 1; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
	for (i = m - 1; i >= 1; i--)
	{

		for (j = 1; j <= i * 2 - 1; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
