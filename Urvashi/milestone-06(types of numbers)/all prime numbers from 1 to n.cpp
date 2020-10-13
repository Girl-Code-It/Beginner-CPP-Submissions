#include <iostream>
using namespace std;
int main()
{
	int num, i, end, isprime;
	cout << "print all prime numbers from 1 to n" << endl;
	cin >> end;
	for (i = 2; i <= end; i++)
	{
		isprime = 1;
		for (num = 2; num <= i / 2; num++)
		{
			if (i % num == 0)
				isprime = 0;
		}
		if (isprime == 1)
			cout << i << endl;
	}
}
