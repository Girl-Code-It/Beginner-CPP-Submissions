#include <iostream>

using namespace std;

void setIthBit(int &n, int i)
{
	n = n | (1 << i);
}
int main()
{
	//swapping
	int n, i;
	cin >> n >> i;
	setIthBit(n, i);
	cout << n << endl;
}
