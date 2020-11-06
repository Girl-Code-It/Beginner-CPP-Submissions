#include <iostream>
using namespace std;
int max(int x, int y);
int main()
{
	int x, y;
	cout << "enter x and y:" << endl;
	cin >> x >> y;
	cout << "maximum number is=" << max(x, y) << endl;
	return 0;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
