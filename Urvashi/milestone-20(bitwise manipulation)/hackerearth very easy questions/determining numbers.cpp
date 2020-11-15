#include <iostream>
using namespace std;

//function sets the value of *x and *y to non -repeating elements in the given array of size n..

void non_repeating_2(int *a, int n, int *x, int *y)
{
	int XOR = a[0]; //hold xor of all elements of array..
	int set_bit_no; //will have only one set bit of XOR..
	*x = 0, *y = 0;

	for (int i = 1; i < n; i++)
		XOR ^= a[i];

	//get rightmost bit int set_bit_no..
	set_bit_no = XOR & ~(XOR - 1);

	//now divide elements in two subsetsby comparing rightmost bit of xor with bit at same position in each 
	// element..
	for (int i = 0; i < n; i++)
	{
		if (a[i] & set_bit_no)
			*x = *x ^ a[i]; //xor of first set
		else
			*y = *y ^ a[i]; //xor of second set..
	}
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int *x = new int[sizeof(int)];
	int *y = new int[sizeof(int)];

	non_repeating_2(a, n, x, y);

	(*x < *y) ? cout << *x << " " << *y : cout << *y << " " << *x << endl;
}
