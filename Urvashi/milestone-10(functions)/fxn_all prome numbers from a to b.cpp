#include <iostream>
using namespace std;
int checkprime();
int main()
{
	int x, y, i, result;
	cout << "enter upper and lower limit:";
	cin >> x >> y;
	cout << "all prime numbers between " << x << "and" << y << "are=" << endl;
	for (i = x; i < y; i++)
	{
		result = checkprime(i);
		if (result == 1)
			cout << i << endl;
	}
	return 0;
}
int checkprime(int a)
{
	int j;
	for (j = 2; j <= a - 1; j++)
	{
		if (a % j == 0)
			return 0;
	}
	if (j == a)
		return 1;
}
