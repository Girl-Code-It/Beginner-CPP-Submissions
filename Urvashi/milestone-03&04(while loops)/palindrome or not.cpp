#include <iostream>
using namespace std;
int main()
{
	int num, rev = 0, n;
	cout << "enter any number" << endl;
	cin >> n;
	num = n;
	while (n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	(rev == num) ? cout << "palindrome" : cout << "not palindrome";
}
