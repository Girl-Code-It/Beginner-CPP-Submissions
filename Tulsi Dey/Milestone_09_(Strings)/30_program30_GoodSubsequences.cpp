#include <iostream>
#define MOD 1000000007
#define ll long long

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
        string s; cin>>s;
        ll arr[26] = {0};
        ll res = 1;
        
        for(int i = 0; i < s.length(); i++)
        arr[s[i]-'a']++;

        for(int i = 0; i < 26; i++)
        if(arr[i] > 0)
        res = ((res%MOD)*(arr[i]%MOD))%MOD;

        cout<<res%MOD<<endl;
    }
	return 0;
}