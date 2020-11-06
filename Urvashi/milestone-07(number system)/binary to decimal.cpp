#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long binary, decimal = 0, tempbinary;
	int N = 0;
	cout << "enter any binary number:";
	cin >> binary;
	tempbinary = binary;
	while (tempbinary != 0)
	{
		if (tempbinary % 10 == 1)
		{
			decimal += pow(2, N);
		}
		N++;
		tempbinary /= 10;
	}
	cout << "binary number =" << binary << endl;
	cout << "decimal number=" << decimal;
}
