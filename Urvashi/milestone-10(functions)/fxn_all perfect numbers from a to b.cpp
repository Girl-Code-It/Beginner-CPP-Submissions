#include <iostream>
using namespace std;

void printperfect(int start, int end);

int isperfect(int num);

int main()
{
	int start, end;
	cout << "enter upper and lower limit:";
	cin >> start >> end;
	cout << "all perfect numbers between " << start << "and" << end << "are=";
	printperfect(start, end);
	return 0;
}

int isperfect(int num)
{
	int i;
	long long sum;
	sum = 0;

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return 1;
	else
		return 0;
}

void printperfect(int start, int end)
{
	while (start <= end)
	{
		if (isperfect(start))
			cout << start << endl;
		start++;
	}
}
