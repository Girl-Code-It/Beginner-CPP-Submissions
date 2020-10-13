#include <iostream>
#include <math.h>
using namespace std;
void bubbleSort(int *a, int n)
{
	int i, j, flag = 0;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	bubbleSort(a, n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] = a[i - 1])
			count++;
	}
	cout << count << endl;
}
o
