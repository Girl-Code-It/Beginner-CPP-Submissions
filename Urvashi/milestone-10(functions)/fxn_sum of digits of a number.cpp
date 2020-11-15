#include <iostream>
using namespace std;

int sumofdigits(int num)
{
	int sum = 0;

	if (num == 0)
		return 0;
	else
		return (num % 10) + sumofdigits(num / 10);
}

int main()
{
	int num;
	cout << "enter number:";
	cin >> num;
	cout << "sum of digits of a number is" << sumofdigits(num);
	return 0;
}
