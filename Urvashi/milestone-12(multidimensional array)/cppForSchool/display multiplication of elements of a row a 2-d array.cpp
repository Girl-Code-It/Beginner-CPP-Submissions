//question:-to print multiplication of all the elements in a row..
#include <iostream>
using namespace std;
int mul_ofrows(int A[4][6])
{
	int i, j, mul = 1;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			mul *= A[i][j];
		}
		cout << "multiplication of elements of " << i + 1 << "row is=" << endl;
		cout << mul << endl;
		mul = 1;
	}
}
int main()
{
	int i, j, m, n, A[4][6];

	cout << "enter the elements in the matrix:";
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 6; j++)
			cin >> A[i][j];

	cout << "the matrix is :" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << A[i][j];
		}
		cout << "\n";
	}
	mul_ofrows(A);
}
