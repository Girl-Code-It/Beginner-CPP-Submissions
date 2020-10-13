#include <iostream>
using namespace std;
int mul(int x, int y)
{
	return (x * y);
}
int main()
{
	int a, b;
	cout << "enter a and b:" << endl;
	cin >> a >> b;
	cout << "multiplication of" << a << "and" << b << "is =" << mul(a, b);
}
