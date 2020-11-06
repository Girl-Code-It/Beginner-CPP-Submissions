#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		int suvo = 0, suvojit = 0;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{

			if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O' && s[i + 4] == 'J' && s[i + 5] == 'I' && s[i + 6] == 'T')
				suvojit++;
			else if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O')
				suvo++;
		}
		cout << "SUVO = " << suvo << " "
			 << "SUVOJIT = " << suvojit << endl;
	}
}
