#include <iostream>
using namespace std;

int multiply_with_3_point_5(int x) //as 3.5 *x = 2*x +x +x/2..
{
	return (x << 1) + x + (x >> 1);
}
int main()
{
	int t, x;
	cin >> t;
	while (t--)
	{
		cin >> x;

		cout << multiply_with_3_point_5(x);
	}
}
