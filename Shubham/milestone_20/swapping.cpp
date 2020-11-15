#include <iostream>

using namespace std;

int main()
{
	//swapping
	int a, b;
	cin >> a >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << endl;
	cout << b << endl;
}
