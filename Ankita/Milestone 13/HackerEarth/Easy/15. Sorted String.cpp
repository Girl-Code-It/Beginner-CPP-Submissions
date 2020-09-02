#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, flag;
    cin >> t;
    while(t--)
    {
        int out[26] = {0}, flag = 0;
        string s, res = "";
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            out[int(s[j]) - 97]++;
        }
        while(1)
        {
            for(int j = 0; j < 26; j++)
            {
                if(out[j] > 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                break;
            int largest = s[0], index = 0;
            for (int j = 0; j < 26; j++)
            {
                if(largest < out[j] && out[j] > 0)
                {
                    largest = s[j];
                    index = j;
                }
            }
            out[index] = -1;
            for(int k = 0; k <= largest; k++)
                res += char(index+97);
        }
        cout << res;
    }
}
