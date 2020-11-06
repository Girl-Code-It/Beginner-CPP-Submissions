#include <iostream>
using namespace std;
int main()
{
	int i, j, N;
	cout << "entr the number of rows:";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (j == 1 || j == N || i == 1 || i == N)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
