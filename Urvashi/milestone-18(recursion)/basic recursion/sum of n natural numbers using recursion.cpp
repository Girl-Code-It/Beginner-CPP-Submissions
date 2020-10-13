#include <iostream>
using namespace std;
int print_sum_of_natural_no(int n)
{
	int sum;
	if (n == 0)
		return 0;
	else
		return sum = n + (print_sum_of_natural_no(n - 1));
}
int main()
{
	int num, sum;
	cin >> num;
	sum = print_sum_of_natural_no(num);
	cout << sum;
}
