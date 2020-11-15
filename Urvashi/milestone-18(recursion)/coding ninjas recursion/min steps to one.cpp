#include <iostream>
using namespace std;
int steps(int n)
{
	if (n <= 1)
		return 0;
	if (n % 2 != 0 && n % 3 != 0)
		return 1 + steps(n - 1);
	else if (n % 2 == 0)
		return 1 + steps(n / 2);
	else if (n % 3 == 0)
		return 1 + steps(n / 3);
}
int main()
{
	int n;
	cin >> n;
	int ctr;
	ctr = steps(n);
	cout << ctr << endl;
}
