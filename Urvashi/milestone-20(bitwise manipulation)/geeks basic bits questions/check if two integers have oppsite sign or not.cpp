#include <iostream>
using namespace std;

// to check whether the two numbers have same or opposite sign..

bool opposite_sign(int x, int y)
{
	return ((x ^ y) < 0);
}
int main()
{
	int x, y;
	cin >> x >> y;
	if (opposite_sign(x, y) == true)
		cout << "YES\n";
	else
		cout << "NO\n";
}
