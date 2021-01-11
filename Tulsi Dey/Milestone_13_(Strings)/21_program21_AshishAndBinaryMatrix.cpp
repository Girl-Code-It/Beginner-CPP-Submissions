#include <bits/stdc++.h>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;

	while(testCases-->0)
	{
		int n, m; cin>>n>>m;

        set<string> set;
        string str; 
        for(int i = 0; i < n; i++)
        {
            cin>>str;
            set.insert(str);
        }

        if(n != set.size()) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
	}
	return 0;		
}
