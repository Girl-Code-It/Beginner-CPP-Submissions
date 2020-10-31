//question-22(idempotent matrix):-Given a N * N matrix and the task is to check matrix is idempotent matrix or not.

#include <iostream>
using namespace std;
int main()
{
	int m, n, A[10][10], sum, max, row = -1, i, x, C[10][10], k;
	cout << "enter the size of the matrix A " << endl;
	cin >> n;
	cout << "enter the binary  elements in the matrix A:";
	for (int i = 0; i < n; i++)

		for (int j = 0; j < n; j++)
			cin >> A[i][j];
	cout << "the matrix A is=" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "multiplication of A with A gives=" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = 0;
			for (int k = 0; k < n; k++)
			{
				sum += A[i][k] * A[k][j];
			}
			C[i][j] = sum;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] == C[i][j])
				x = 0;
		}
	}
	if (x == 0)
		cout << " idempotent";
	else
		cout << "not idempotent";
}
