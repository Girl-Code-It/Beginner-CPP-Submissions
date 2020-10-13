#include <iostream>
using namespace std;

int lcm(int a, int b)
{
	int max = 0;
	max += b;
	if ((max % a == 0) && (max % b == 0))
		return max;
	else
		return lcm(a, b);
}

int main()
{
	int num1, num2, LCM;
	cout << "enter two numbers:";
	cin >> num1 >> num2;
	if (num1 > num2)
		LCM = lcm(num2, num1);
	else
		LCM = lcm(num1, num2);
	cout << "LCM of" << num1 << "and" << num2 << "is" << LCM;

	return 0;
}
