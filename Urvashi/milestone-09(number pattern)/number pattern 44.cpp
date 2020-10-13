#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, value;
	cout << "enter the rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		value = i + 1;
		for (j = 3; j <= i; j++)
		{
			cout << value;
			value++;
		}
		for (j = (i * 2) - 1; j >= i; j--)
		{
			cout << j;
		}
		cout << "\n";
	}
}
