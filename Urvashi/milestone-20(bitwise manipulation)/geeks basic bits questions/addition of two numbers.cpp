#include <iostream>
using namespace std;
int add(int a, int b)
{
	//iterate till there is no carry..
	while (b != 0)
	{
		int carry = a & b; //carry now contains common set bits of a and b..

		a = a ^ b; //sum of bits of a and b where atleast one of the bits is not set..

		b = carry << 1; //carry is shifted by one so that adding it to a gives the required sum..
	}
	return a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b);
}
