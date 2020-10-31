#include <iostream>
#include <math.h>
using namespace std; //question-10:-print matrix in spiral form...
int main()
{
	int n, A[10][10], round, j;
	cout << "enter the size of the matrix A " << endl;
	cin >> n;
	cout << "enter the elements in the matrix A:";
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
	cout << "elements of the matrix in the spiral order are=" << endl;
	round = ceil((float)n / 2);
	for (int i = 0; i < round; i++)
	{
		for (j = i; j <= n - 1 - i; j++)
			cout << A[i][j] << " ";
		for (j = i + 1; j <= n - 1 - i; j++)
			cout << A[j][n - 1 - i] << " ";
		for (j = n - 2 - i; j >= i; j--)
			cout << A[n - 1 - i][j] << " ";
		for (j = n - 2 - i; j > i; j--)
			cout << A[j][i] << " ";
	}
}
