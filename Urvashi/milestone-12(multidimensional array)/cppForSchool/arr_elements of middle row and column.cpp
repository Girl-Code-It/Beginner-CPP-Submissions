#include <iostream>
using namespace std;
void middle_row(int A[][10], int m, int n)
{
	int i, j;
	cout << "the elements of middle row are=" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == m / 2)
				cout << A[i][j] << "\t";
		}
	}
}
void middle_column(int A[][10], int m, int n)
{
	int i, j;
	cout << "the elements of middle column are=" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n / 2)
				cout << A[i][j] << "\t";
		}
	}
}
int main()
{
	int m, n, A[10][10];
	cout << "enter the elements in the array:";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
	cout << "the matrix is=" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j];
		}
		cout << "\n";
	}
	middle_row(A, m, n);
	middle_column(A, m, n);
}
