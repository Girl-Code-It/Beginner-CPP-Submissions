#include <iostream>
#include <string>
using namespace std;
void encrypted(string s, int l, int h)
{
	if (l <= h)
	{
		int mid = l + (h - l) / 2;
		cout << s[mid] << endl;
		encrypted(s, l, mid - 1);
		encrypted(s, mid + 1, h);
	}
}
int main()
{
	string s;
	int n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cin >> s;
		encrypted(s, 0, n - 1);
	}
}
