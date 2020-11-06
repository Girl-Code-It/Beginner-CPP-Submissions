#include <iostream>

using namespace std;

int countBitsFast(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n = n & (n - 1);
	}

	return count;
}

int countBits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count += n & 1;
		n = n >> 1;
	}
	return count;
}
int main()
{
	//number of setbits

	int n;
	cin >> n;

	cout << countBitsFast(n) << endl;
}
