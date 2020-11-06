#include <iostream>

using namespace std;

void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}
int linearSearch(int *A, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (A[i] == x)
		{
			A[i] = 99999; //for 2 same elements
			return i;
		}
	return -1;
}
void bubbleSort(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
				swap(&A[j], &A[j + 1]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int A[n], B[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	//copy original array to another
	for (int i = 0; i < n; i++)
		B[i] = A[i];

	bubbleSort(A, n);

	for (int i = 0; i < n; i++)
	{
		cout << linearSearch(B, n, A[i]) << " ";
	}
}
