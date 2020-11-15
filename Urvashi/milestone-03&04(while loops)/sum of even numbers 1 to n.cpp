#include <iostream>
using namespace std;
int main()
{
	int num, n, sum = 0;
	cout << "enter the upper limit" << endl;
	cin >> n;
	for (num = 1; num <= n; num++)
	{
		if (num % 2 == 0)
			sum += num;
	}
	cout << "sum of even numbers is:" << sum << endl;
}
