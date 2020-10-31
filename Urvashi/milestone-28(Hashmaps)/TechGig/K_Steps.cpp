/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void count(string s)
{
	unordered_map<char, int> m;
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}
	vector<int> v;
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (m[i] == 0)
			v.push_back(0);
		else
			v.push_back(m[i]);
	}
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}
int main()
{
	int t;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		count(s);
	}
}
