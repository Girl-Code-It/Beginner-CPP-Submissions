#include <iostream>
using namespace std;
void even_odd(int start, int n)
{
	if (start > n)
		return;
	cout << start << " ";
	even_odd(start + 2, n);
}

int main()
{
	int a;
	cin >> a;
	cout << "odd" << endl;
	even_odd(1, a);
	cout << endl;
	cout << "even:" << endl;
	even_odd(2, a);
}
