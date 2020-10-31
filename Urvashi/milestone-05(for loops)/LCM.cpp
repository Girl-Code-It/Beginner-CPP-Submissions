#include <iostream>
using namespace std;
int main()
{
	int a, b, i, max, LCM = 1;
	cout << "enter a and b" << endl;
	cin >> a >> b;
	max = (a > b) ? a : b;
	i = max;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			LCM = i;
			break;
		}
		i += max;
	}
	cout << "LCM of a and b is " << endl
		 << LCM;
}
