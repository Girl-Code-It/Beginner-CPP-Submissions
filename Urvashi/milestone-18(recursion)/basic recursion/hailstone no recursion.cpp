#include <iostream>
using namespace std;
int get_next_value(int a)
{
	int i = a;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = 3 * i + 1;
	return i;
}
void get_hailstone_no(int a)
{
	int b = a;
	if (b == 1)
		cout << b << " ";
	else
	{
		cout << b << " ";
		get_hailstone_no(get_next_value(a));
	}
}
int countlength(int a)
{
	int b = a;
	if (b == 1)
		return 1;
	else
		return 1 + countlength(get_next_value(a));
}
int main()
{
	int a;
	cin >> a;
	cout << "hailstone series is...." << endl;
	get_hailstone_no(a);
	cout << endl;
	cout << "length of hailstone series is...." << countlength(a);
}
