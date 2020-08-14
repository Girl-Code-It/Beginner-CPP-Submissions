#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int d[26]= {0};
        long long int uvowel=0, total=1;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if(d[s[i] - 'a'] == 0)
                {
                    uvowel++;
                    d[s[i] - 'a'] = 1;
                }
            }
            else if(s[i] == '_')
            {
                total *= uvowel;
            }
        }
        cout << total << endl;
    }
    
}
