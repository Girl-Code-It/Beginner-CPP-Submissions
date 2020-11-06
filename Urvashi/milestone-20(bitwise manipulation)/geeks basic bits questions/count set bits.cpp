#include <iostream>
using namespace std;
//to count no of set bits in a number

int main()
{
	unsigned int t, n;
	cin >> t;
	while (t--)
	{
		unsigned int count = 0;
		cin >> n;
		while (n)
		{
			if (n & 1)
				count++;
			n >>= 1;
		}
		cout << count << endl;
	}
}
