#include <iostream>
using namespace std;
int main()
{
	int max, secmax, i, size, A[100];
	cout << "enter the size of the array:" << endl;
	cin >> size;
	cout << "enter the elements of the array:" << endl;
	for (i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	max = A[0];
	secmax = A[0];
	for (i = 0; i < size; i++)
	{
		if (max < A[i])
		{
			secmax = max;
			max = A[i];
		}
		else if (A[i] > secmax && A[i] < max)
		{
			secmax = A[i];
		}
	}
	cout << "second largest element of the array is=" << secmax;
}
