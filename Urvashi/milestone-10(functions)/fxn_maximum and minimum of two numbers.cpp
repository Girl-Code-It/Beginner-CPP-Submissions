#include <iostream>
using namespace std;
int max(int x, int y)
{
	return (x > y) ? x : y;
}
int min(int x, int y)
{
	return (x < y) ? x : y;
}
int main()
{
	int a, b;
	cout << "enter a and b:" << endl;
	cin >> a >> b;
	cout << "maximum of" << a << "and" << b << "is =" << max(a, b) << endl;
	cout << "minimum of" << a << "and" << b << "is =" << min(a, b) << endl;
}
