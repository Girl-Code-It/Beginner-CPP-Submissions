//question:-to print elements of 2d array
#include <iostream>
using namespace std;
void input(int A[3][3])
{
	cout << "enter the elements in the array:";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> A[i][j];
}
void display(int A[3][3])
{
	cout << " elements in the array are:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	int m, n, A[3][3];
	input(A);
	display(A);
}
