#include <iostream>
using namespace std;
int main()
{
	int i, j, m, diff, value;
	cout << "enter the rows:";
	cin >> m;
	diff = 1;
	value = 1;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << value << " ";
			value += diff;
			diff++;
		}
		cout << "\n";
	}
}
