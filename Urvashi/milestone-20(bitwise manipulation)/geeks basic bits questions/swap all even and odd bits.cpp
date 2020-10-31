#include <iostream>
using namespace std;
unsigned int swap_odd_even_bits(unsigned int x)
{
	//get all even bits of x
	unsigned int even_bits = x & 0xAAAAAAAA;
	//get all odd bits of x
	unsigned int odd_bits = x & 0x55555555;

	even_bits >>= 1; //right shift even bits
	odd_bits <<= 1;	 //left shift odd bits

	return (even_bits | odd_bits); //combine even and odd bits
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned int x;
		cin >> x;
		unsigned int ans = swap_odd_even_bits(x);
		cout << ans << endl;
	}
}
