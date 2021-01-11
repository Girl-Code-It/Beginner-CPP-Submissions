#include <bits/stdc++.h>

using namespace std;

int getTotal(string s, int n)
{
    vector<string> v;
    string b;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-i+1; j++)
        {
            b = s.substr(i,j);
            if((b[0] == '1' && b[b.length()-1] == '1') && b.length() > 1)
            v.emplace_back(b);
		}
	}

	return v.size();
}
int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n;
		string s;
		cin>>n>>s;

		cout<<getTotal(s,n)<<endl;
	}
	return 0;
}