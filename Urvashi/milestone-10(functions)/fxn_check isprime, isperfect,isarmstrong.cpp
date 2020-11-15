#include <iostream>
using namespace std;
int isprime(int x);
int isarmstrong(int x);
int isperfect(int x);
int main()
{
	int x;
	cout << "enter any number:";
	cin >> x;
	if (isprime(x))
		cout << "it is a prime number" << endl;
	else
		cout << "it is not a prime number" << endl;

	if (isarmstrong(x))
		cout << "it is an armstrong number" << endl;
	else
		cout << "it is not an armstrong number" << endl;

	if (isperfect(x))
		cout << "it is a perfect number" << endl;
	else
		cout << "it is not a prime number" << endl;
	return 0;
}
int isprime(int num)
{
	int i;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int isarmstrong(int num)
{
	int orignum, rem, sum = 0;
	num = orignum;
	while (num != 0)
	{
		rem = num % 10;
		sum += rem * rem * rem;
		num /= 10;
	}
	if (sum == orignum)
		return 1;
	else
		return 0;
}

int isperfect(int num)
{
	int i, n, sum;
	sum = 0;
	n = num;

	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
