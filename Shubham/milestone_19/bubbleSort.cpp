#include<iostream>

using namespace std;

void swap(int* A, int* B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}
int bubbleSort(int* A, int n)
{
	int count=0;
	for(int i=0; i<n; i++)
	{
		int flag = 0;
		count++;
		for(int j=0; j<n-i-1; j++)
		{
			if(A[j] > A[j+1])
			{
				swap(&A[j] , &A[j+1]);
				flag =1;
			}
		}
		if(flag ==0)
			break;
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	int A[n];

	for(int i=0; i<n; i++)
		cin >> A[i];

	cout << bubbleSort(A, n) << endl;
}
