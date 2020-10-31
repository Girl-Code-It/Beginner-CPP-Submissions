#include <iostream>
using namespace std;
void multiplication_of_matrices(int m1, int n1, int a[10][10], int m2, int n2, int b[10][10], int c[10][10])
{
	static int i = 0, j = 0, k = 0;
	if (i >= m1)
		return;
	else if (i < m1)
	{
		if (j < n2)
		{
			if (k < n1)
			{
				c[i][j] += a[i][k] * b[k][j];
				k++;
				multiplication_of_matrices(m1, n1, a, m2, n2, b, c);
			}
			k = 0;
			j++;
			multiplication_of_matrices(m1, n1, a, m2, n2, b, c);
		}
		j = 0;
		i++;
		multiplication_of_matrices(m1, n1, a, m2, n2, b, c);
	}
}
void display_matrix(int m1, int n2, int c[10][10])
{
	for (int i = 0; i < m1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int a[10][10], b[10][10], c[10][10] = {0}, n1, n2, m1, m2, i, j, k;
	cin >> m1 >> n1;
	cin >> m2 >> n2;
	if (n1 != m2)
		cout << "not possible...";
	else
	{
		cout << "matrix A..." << endl;
		for (int i = 0; i < m1; i++)
			for (int j = 0; j < n1; j++)
				cin >> a[i][j];

		cout << "matrix B..." << endl;
		for (int i = 0; i < m2; i++)
			for (int j = 0; j < n2; j++)
				cin >> b[i][j];
		multiplication_of_matrices(m1, n1, a, m2, n2, b, c);
		cout << "multiplication of matrices is..." << endl;
		display_matrix(m1, n2, c);
	}
}
