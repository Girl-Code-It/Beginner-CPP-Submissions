#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	//unsetting rightmost set bit means converting the rightmost 1 into 0.

	cout << (n & (n - 1));
}
