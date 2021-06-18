//sorting strings-Xenny's strings
#include<bits/stdc++.h>
using namespace std;
int m;
bool comp(string a,string b)
{   
	return a.substr(0,m)<=b.substr(0,m);
}
int main()
{
	int t;
	cin>>t;
	vector<string> v;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k>>m;
		string s;
		for(i=0;i<n;i++)
		{
			cin>>s;
			v.push_back(s);
			sort(v.begin(),v.end(),comp);
		}cout<<v[k-1];
	}
}
