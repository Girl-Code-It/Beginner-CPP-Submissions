#include <iostream>
using namespace std;
int LCM(int a, int b)
{
	static int m = 0;
	m += a;
	if (m % a == 0 && m % b == 0)
		return m;
	LCM(a, b);
}
int main()
{
	int a, b, lcm;
	cin >> a >> b;
	if (a > b)
		lcm = LCM(a, b);
	else
		lcm = LCM(b, a);
	cout << lcm << endl;
}
