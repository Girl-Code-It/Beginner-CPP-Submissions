#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	string a;
	for (int i = 0; i < t+1; i++)
	{
		getline(cin, a);
		if (t > 0)
		{
			reverse(a.begin(), a.end());
			puts(a.c_str());
			cout << "\n";
		}
	}
	return 0;
}
