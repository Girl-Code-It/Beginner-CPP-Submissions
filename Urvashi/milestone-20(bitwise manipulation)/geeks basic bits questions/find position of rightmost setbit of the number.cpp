#include <iostream>
using namespace std;
int main()
{
	//to find postion of rightmost setbit of a number.
	int n;
	cin >> n;
	if (n & 1)
		cout << "1";

	n = n ^ ((n & (n - 1)));
	int pos = 0;
	while (n)
	{
		n = n >> 1;
		pos++;
	}
	cout << pos;
}
