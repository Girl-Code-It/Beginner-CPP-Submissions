#include <iostream>
using namespace std;

int main()
{
	int array[100], i, size;

	cout << "enter the size of the array:";
	cin >> size;

	cout << "enter the elements in the array:" << endl;
	for (i = 0; i < size; i++)
		cin >> array[i];

	cout << "after splitting the array is :" << endl;
	for (i = 0; i < size / 2; i++)
		cout << array[i] << " ";
	cout << endl;

	for (i = size / 2; i < size; i++)
		cout << array[i] << " ";
}
