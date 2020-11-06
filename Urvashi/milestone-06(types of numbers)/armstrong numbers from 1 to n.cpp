#include <iostream>
using namespace std;
int main()
{
	int num, sum = 0, rem, upperlimit, i;
	cout << "enter any positive number";
	cin >> upperlimit;
	cout << "armstrong numbers between 1 to n are:";
	for (i = 1; i <= upperlimit; i++)
	{
		sum = 0;
		num = i;
		while (num > 0)
		{
			rem = num % 10;
			num /= 10;

			sum += rem * rem * rem;
		}
		if (sum == i)
		{
			cout << i << endl;
		}
	}
	return 0;
}
