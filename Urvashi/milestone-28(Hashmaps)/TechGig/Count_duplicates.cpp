/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

void duplicates(string s)
{
	int sum = 0;
	unordered_map<int, int> m;
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}
	for (auto i : m)
	{
		if (i.second > 1)
		{
			sum += i.second;
		}
	}
	cout << sum;
}

int main()
{
	string s;
	cin >> s;
	duplicates(s);
}
