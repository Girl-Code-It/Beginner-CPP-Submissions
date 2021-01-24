#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int testCases; cin>>testCases;

    while(testCases-->0)
    {
        string s; cin>>s;
        ll ans = 1;

        int arr[26] = {0};
        int vowels = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && arr[s[i]-'a'] == 0) 
            {
                vowels++;
                arr[s[i]-'a'] = 1;
            }
            else if(s[i] == '_') ans *= vowels;
        }
        cout<<ans<<endl;
    }
    return 0;
} 