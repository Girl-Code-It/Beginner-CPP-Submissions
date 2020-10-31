#include <iostream>
using namespace std;
int main()
{
	int a[10], i, size;

	cout << "enter the size of the array:";
	cin >> size;

	cout << "enter the elements of the array:";
	for (i = 0; i < size; i++)
		cin >> a[i];

	for (i = size; i > 0; i--)
		a[i] = a[i - 1];

	a[0] = a[size];

	for (i = 0; i < size; i++)
		cout << a[i] << " ";
}
