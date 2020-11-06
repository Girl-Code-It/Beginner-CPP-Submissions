#include <iostream>
using namespace std;

int main()
{
	int freq[100], i, size, j, a[100], count = 0, k;

	cout << "enter the size of the array:" << endl;
	cin >> size;

	cout << "enter the elements on the array:";
	for (i = 0; i < size; i++)
		cin >> a[i];

	cout << "after deleting duplicte elements the remaining array is= " << endl;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (a[i] == a[j])
			{
				for (k = j; k < size; k++)
				{
					a[k] = a[k + 1];
				}
				size--;
				j--;
			}
		}
	}
	for (i = 0; i < size; i++)
		cout << a[i] << " ";
}
