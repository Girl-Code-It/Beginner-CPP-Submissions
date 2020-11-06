#include <iostream>
using namespace std;

unsigned int getModulo(unsigned int n, unsigned int d)
{
	return (n & (d - 1));
}

int main()
{
	unsigned int t, n, d;
	cin >> t;
	while (t--)
	{
		cin >> n >> d;
		cout << getModulo(n, d);
	}
}
