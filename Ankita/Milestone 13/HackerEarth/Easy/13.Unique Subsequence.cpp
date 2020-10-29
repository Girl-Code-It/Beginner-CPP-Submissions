#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main ()
 {
	 int t, n, j;
	 cin >> t;
	 string s;
	while(t--)
	{
		cin >> n >> s;
		int res[100000] = {0}, index = 0;
		for(int i = 0; i < n; i++)
		{
			for(j = i; j < n-1; j++)
			{
				if(s[j] != s[j+1])
					res[index]+=1;
			}
			i = j;
			index++;
		}
		int num = res[0];
		for(int j = 0; j < index; j++)
		{
			cout << res[j] << "\n";
			if(num < res[j])
				num = res[j];
		}
		cout << num+1 << "\n";
	}
	return 0;
 }
