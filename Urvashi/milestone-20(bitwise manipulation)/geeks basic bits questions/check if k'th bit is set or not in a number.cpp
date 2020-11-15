#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	//check if kth bit is set or not means it is 1 or not.

	(n & (1 << (k - 1))) ? cout << "SET\n" : cout << "UNSET\n";
}
