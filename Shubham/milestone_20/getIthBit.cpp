#include <iostream>

using namespace std;

int getIthBit(int n, int i)
{
	return (n & (1 << i)) == 0 ? 0 : 1;
}
int main()
{
	//swapping
	int n, i;
	cin >> n >> i;

	cout << getIthBit(n, i) << endl;
}
