#include <iostream>
using namespace std;
int steps(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else if (n == 2)
		return 2;
	return steps(n - 1) + steps(n - 2) + steps(n - 3);
}
int main()
{
	int n;
	cin >> n;
	int ctr;
	ctr = steps(n);
	cout << ctr << endl;
}
