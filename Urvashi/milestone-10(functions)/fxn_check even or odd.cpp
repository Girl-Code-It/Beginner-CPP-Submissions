#include <iostream>
using namespace std;
int eo(int a)
{
	(a % 2 == 0) ? cout << "even" : cout << "odd";
}
int main()
{
	int a;
	cout << "enter a :" << endl;
	cin >> a;
	return eo(a);
}
