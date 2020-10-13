#include <iostream>
using namespace std;
int sumofnaturalnos(int start, int end);
int main()
{
	int start, end, sum;
	cout << "enter the upper and lower limit";
	cin >> start >> end;
	sum = sumofnaturalnos(start, end);
	cout << "sum of all natural numbers from" << start << "to" << end << "is" << sum;
	return 0;
}
int sumofnaturalnos(int start, int end)
{
	if (start == end)
		return start;
	else
		return start + sumofnaturalnos(start + 1, end);
}
