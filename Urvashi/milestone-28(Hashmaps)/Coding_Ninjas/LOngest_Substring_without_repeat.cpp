#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

int longestSubstr(string S)
{
    unordered_map<char, int> m;
    unordered_map<char, int>::const_iterator it;

    int count = 0, diff, maxLen = INT_MIN, index;

    if (S.size() == 0)
        return 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (m.find(S[i]) == m.end())
        {
            m[S[i]] = i;
            count++;
        }
        else
        {
            it = m.find(S[i]);
            index = it->second;
            diff = i - index;

            if (diff <= count)
            {
                count = diff;
                m[S[i]] = i;
            }
            else
            {
                m[S[i]] = i;
                count++;
            }
        }
        if (maxLen < count)
            maxLen = count;
    }
    return maxLen;
}
