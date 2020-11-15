#include <iostream>
using namespace std;
int GCD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			return GCD(a - b, b);
		else
			return GCD(a, b - a);
	}
	return a;
}
int main()
{
	int a, b, gcd;
	cin >> a >> b;
	gcd = GCD(a, b);
	cout << gcd << endl;
}
