#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n & 1)
		cout << "1";
	else
		cout << log2(n & -n) + 1;
}
