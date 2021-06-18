//Soln1

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int testCases; cin>>testCases;

    while(testCases-->0)
    {
    string s; cin>>s;

    ll n = s.length(), count1 = 0, count2 = 0, fs = 0, fl = n-1;

    for(int i = 0, j = n-1; i < n, j >= 0; i++, j--)
    {
        if(s[i] == 'O')
        {
            count1 += i - fs;
            fs++;
        }
        if(s[j] == 'O')
        {
            count2 += fl - j;
            fl--;
        }
    }

    if(count1 < count2) cout<<count1<<endl;
    else cout<<count2<<endl;
}
    return 0;
}

//Soln2
/*
#include <bits/stdc++.h>
#define ll long long
#define deb(x) cout<<#x<<" = "<<x<<endl;

using namespace std;

ll getStart(string s, ll n, int flag)
{
    if(flag == 1)
    {
        for(ll i = 0; i < n; i++)
	    if(s[i] == 'O') return i;
    }
    else
    {
        for(ll i = n-1; i >= 0; i--)
	    if(s[i] == 'O') return i;
    }
    return 0;
}
ll getEnd(string s, ll n, int flag)
{
    if(flag == 0)
    {
        for(ll i = 0; i < n; i++)
	    if(s[i] == 'Z') return i;
    }
    else
    {
        for(ll i = n-1; i >= 0; i--)
	    if(s[i] == 'Z') return i;
    }
    return n-1;
}
ll getRes1(string s, ll n)
{
	ll res = 0, c = 0, start = getStart(s,n,0), end = getEnd(s,n,0);

	for(ll i = start; i >= end; i--)
	if(s[i] != 'Z')c++;
	else res += c;

	return res;
}
ll getRes2(string s, ll n)
{
	ll res = 0, c = 0, start = getStart(s,n,1), end = getEnd(s,n,1);

	for(ll i = start; i <= end; i++)
	if(s[i] != 'Z') c++;
	else res += c;

	return res;
}
int main()
{
	int testCases = 1; 
    cin>>testCases;

	while(testCases-->0)
	{
		string s; cin>>s;
        ll n = s.length();

		string g = s, h = s;
		sort(g.begin(),g.end());
        reverse(h.begin(),h.end());

		if(s == g) cout<<0<<endl;
		else
        cout<<min( getRes1(s, n), getRes2(s, n))<<endl; 
	}
	return 0;
} 
*/