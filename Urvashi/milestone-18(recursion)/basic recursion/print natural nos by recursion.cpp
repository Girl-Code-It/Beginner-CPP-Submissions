#include <iostream>
using namespace std;
void print_natural_no(int n)
{
	if (n == 0)
		return;
	else
		print_natural_no(n - 1);
	cout << n << " ";
}
int main()
{
	int num;
	cin >> num;
	print_natural_no(num);
}
