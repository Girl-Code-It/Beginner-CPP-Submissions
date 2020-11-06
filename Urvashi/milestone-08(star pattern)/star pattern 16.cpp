#include <iostream>
using namespace std;
int main()
{
	int i, j, N;
	cout << "enter the number of rows:";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j < N; j++)
		{
			cout << " ";
		}
		for (j = 1; j <= N; j++)
		{

			if (i == N || j == N || j == 6 - i)
				cout << "*";

			else
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}
