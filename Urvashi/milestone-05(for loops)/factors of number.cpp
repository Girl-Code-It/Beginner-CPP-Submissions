#include <iostream>
using namespace std;
int main()
{
	int i, num;
	cout << "enter the number" << endl;
	cin >> num;
	cout << "factors of the number are:" << endl;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
}
