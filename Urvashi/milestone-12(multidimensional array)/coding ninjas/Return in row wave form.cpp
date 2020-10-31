//question-6(return in row wave form):-Given an N*M 2D integer array,
// write a method that read rows of the matrix alternatively from left to right and right to left and return
// them as a 1 dimensional array.

#include <iostream>
using namespace std;
int main()
{
	int n, A[10][3], i, m, j;
	cout << "enter the size of the matrix A" << endl;
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
	cout << endl;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < n; j++)
				cout << A[i][j] << " ";
		}
		else
		{
			for (j = n - 1; j >= 0; j--)
				cout << A[i][j] << " ";
		}
	}
}
