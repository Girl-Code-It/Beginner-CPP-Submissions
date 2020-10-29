#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	string a[t+1];
	for (int i = 0; i < t+1; i++)
	{
		getline(cin, a[i]);
	}
	for( int i = 1; i < t+1; i++)
	{
		for (int j = 0; j < t+1; j++)
		{
			reverse(a[j].begin(), a[j].end());
			if ( i != j && a[i] == a[j])
			{
				int mid = (a[i].size()-1)/2;
				cout << a[i].size() << " " << a[i][mid];
				break;
			}
		}
	}
	return 0;
}
