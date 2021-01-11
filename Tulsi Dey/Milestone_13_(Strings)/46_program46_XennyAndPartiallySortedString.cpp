#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n, k, m;
		cin>>n>>k>>m;

		string arr[n];
		string t;

		for(int i = 0; i < n; i++)
		{
			cin>>t;
			arr[i] = t;
		}

		sort(arr, arr+n);

		cout<<arr[k-1]<<endl;
	}
	return 0;
}

/*
//Alternate solution using map
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n, k, m;
		cin>>n>>k>>m;

		int c = 0;

		map<string,string> map;

		for(int i = 0; i < n; i++)
		{
			string t; cin>>t;
			map.insert(pair<string,string>(t.substr(0,m),t));
		}
        
		for(auto i = map.begin(); i != map.end(); i++)
		{
			c++;
			if(c == k)
			{
				cout<<(*i).second<<endl;
				break;
			}
		}
	}
	return 0;
}
*/