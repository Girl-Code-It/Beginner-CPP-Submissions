#include <iostream>

using namespace std;

int main()
{
	unsigned long long int n;
	while (cin >> n)
	{
		int count = 0;
		while (n > 0)
		{
			n = n & (n - 1);
			count++;
		}
		cout << count << endl;
	}
}
