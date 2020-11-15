#include <iostream>

using namespace std;

void resetIthBit(int &n, int i)
{
	int mask = 1 << i;
	mask = ~mask;
	n = n & mask;
}
int main()
{
	int n, i;
	cin >> n >> i;
	resetIthBit(n, i);
	cout << n << endl;
}
