#include <iostream>
#include <math.h>
using namespace std;

int factorial(int num)
{

	int fact = 0;
	if (num == 0)
		return 1;
	else
		return num * factorial(num - 1);
}

int main()
{
	int num;
	cout << "enter number:";
	cin >> num;
	cout << "factorial of" << num << "is" << factorial(num);
	return 0;
}
