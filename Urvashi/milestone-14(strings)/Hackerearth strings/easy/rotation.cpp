#include <bits/stdc++.h>
using namespace std;
int main()
{
	string T;
	string S;
	long long N;
	cin >> N;
	cin >> S;
	cin >> T;
	int k = 0;
	for (int i = 0; S != T; i++)
	{
		S[i] = S[N - i - 1];
		S[i] = S[i + 1];
		k++;
	}
	cout << k;
}
