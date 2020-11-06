#include <iostream>

using namespace std;

void leftRotateByOne(char *s, int n)
{
	char temp = s[0];

	for (int i = 0; i < n - 1; i++)
	{
		s[i] = s[i + 1];
	}
	s[n - 1] = temp;
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n, count = 0;
		cin >> n;
		char s[n];
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				count++;
		}
		cout << count << endl;
	}
}
