#include <iostream>
using namespace std;

void printArmstrong(int start, int end);

int main()
{
	int start, end;
	cout << "enter upper and lower limit:";
	cin >> start >> end;
	cout << "all armstrong numbers between " << start << "and" << end << "are=";
	printArmstrong(start, end);
	return 0;
}

void printArmstrong(int start, int end)
{
	int num, rem;
	long long sum;

	while (start != end)
	{
		sum = 0;
		num = start;

		while (num != 0)
		{
			rem = num % 10;
			sum += rem * rem * rem;
			num /= 10;
		}
		if (start == sum)
			cout << start << endl;
		start++;
	}
}
