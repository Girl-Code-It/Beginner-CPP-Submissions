#include <iostream>
using namespace std;

//magic no is the no which is either the power of 5 or sum of powers of 5.
int nth_magic_number(int n)
{
	int pow = 1, ans = 0;
	//go through every bit of n
	while (n)
	{
		pow *= 5;
		//if last bit of n is set
		if (n & 1)
			ans += pow;
		//proceed to next bit
		n >>= 1;
	}
	return ans;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << nth_magic_number(n);
	}
}
