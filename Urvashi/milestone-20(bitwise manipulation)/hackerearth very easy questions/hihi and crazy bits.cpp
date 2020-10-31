#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;

		long long int x = ~(n);

		long long int first_set_bit = x & (~(x - 1));

		cout << (n | first_set_bit) << endl;
	}
}
