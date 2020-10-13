//question-2(art of reversing):-to print rows in  reverse order..

#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, A[10][10];
	cout << "enter the size of the matrix A " << endl;
	cin >> m >> n;
	cout << "enter the elements in the matrix A:";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
	cout << "the matrix A is=" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "the rows in reverse order are=" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
}
