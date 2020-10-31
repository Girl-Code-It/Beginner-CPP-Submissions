#include <iostream>
using namespace std;
void print_array(int *ar, int n)
{
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
}
void generate(int *a, int *b, int *c, int i, int j, int m, int n, int len, bool flag)
{
	if (flag) //if flag true we will pick an element from array a,
	{
		if (len)
			print_array(c, len + 1);
		for (int k = i; k < m; k++)
		{
			if (!len)
			{
				c[len] = a[k];
				generate(a, b, c, k + 1, j, m, n, len, !flag);
			}
			else
			{
				if (a[k] > c[len])
				{
					c[len + 1] = a[k];
					generate(a, b, c, k + 1, j, m, n, len + 1, !flag);
				}
			}
		}
	}
	else //pick element from array b.
	{
		for (int l = j; l < n; l++)
		{
			if (b[l] > c[len])
			{
				c[len + 1] = b[l];
				generate(a, b, c, i, l + 1, m, n, len + 1, !flag);
			}
		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	int c[m + n];
	generate(a, b, c, 0, 0, m, n, 0, true);
}
