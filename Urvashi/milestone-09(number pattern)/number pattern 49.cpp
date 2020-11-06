#include <iostream>
using namespace std;
int main()
{
	int i, j, m, diff, value;
	cout << "enter the rows:";
	cin >> m;

	for (i = 1; i <= m; i++)
	{
		diff = (m - 1);
		value = i;
		for (j = 1; j <= i; j++)
		{
			cout << value << " ";
			value += diff;
			diff--;
		}
		cout << "\n";
	}
}
