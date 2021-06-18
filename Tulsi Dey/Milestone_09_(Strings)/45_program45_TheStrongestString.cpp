#include <bits/stdc++.h>

using namespace std;

void getRes(string s, int n)
{
    int max = 0;
    string res = "";

    for(int i = 'z'; i >= 'a'; i--)
    {
        for(int j = max; j < n; j++)
        {
            if(s[j] == i) 
            {
                res += s[j];
                max = j;
                break;
            }
        }
    }

    cout<<res<<endl;
}
int main()
{
    int n; cin>>n;
	string s; cin>>s;

    getRes(s, n);

	return 0;
}