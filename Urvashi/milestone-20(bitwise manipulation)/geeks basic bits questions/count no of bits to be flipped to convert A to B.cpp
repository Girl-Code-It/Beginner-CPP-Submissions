#include <iostream>
using namespace std;

// to count no of bits to be flipped to convert a into b.
int countbits(int a, int b)
{
	int XOR = a ^ b;
	int count = 0;
	while (XOR)
	{
		count++;
		XOR &= (XOR - 1);
	}
	return count;
}
int main()
{
	int t, x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;

		cout << countbits(x, y);
	}
}
