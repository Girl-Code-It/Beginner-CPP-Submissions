#include <iostream>
#include <math.h>
using namespace std;
//to find position of nth setbit in a number.
int main()
{
	int n;
	cin >> n;
	if (n & (n - 1))
		cout << "having no setbit in it" << endl;
	else
		cout << log2(n) + 1;
}
