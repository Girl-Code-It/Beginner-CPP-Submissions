#include <iostream>
using namespace std;
int main()
{
	int A[100], i, size, B[100];
	cout << "enter the size of the array:";
	cin >> size;
	cout << "enter the elements in the array:" << endl;
	for (i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	for (i = 0; i < size; i++)
	{
		B[i] = A[i];
	}
	cout << "elements of array 1 are=" << endl;
	for (i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "elements of another array containing copy of the original array are" << endl;
	for (i = 0; i < size; i++)
	{
		cout << B[i] << " ";
	}
}
