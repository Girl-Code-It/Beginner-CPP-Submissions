#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	//turn on means making kth bit 1.
	cout << (n | (1 << (k - 1)));
}
