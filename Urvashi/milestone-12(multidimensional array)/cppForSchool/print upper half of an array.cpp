//question:-to print upperhalf of the matrix..
#include <iostream>
using namespace std;
void upper_half(int A[3][3])
{
	int i, j;
	cout << "the upperhalf matrix is=" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j >= i)
				cout << A[i][j] << "\t";
			else
				cout << " "
					 << "\t";
		}
		cout << "\n";
	}
}
int main()
{
	int i, j, m, n, A[3][3];
	cout << "enter the elements in the matrix:";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> A[i][j];

	cout << "the matrix is :" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j];
		}
		cout << "\n";
	}
	cout << endl;
	upper_half(A);
}
