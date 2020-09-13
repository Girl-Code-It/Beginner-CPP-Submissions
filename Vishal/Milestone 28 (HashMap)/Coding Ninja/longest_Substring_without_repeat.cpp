#include<vector>
using namespace std;

int longestSubstr(string S)
{
    //To store last index
    vector<int>prevIndex(26,-1);

    int n = S.length(),max_len = 0;

    //Start of current window
    int j = 0;

    for(int i=0; i<n; i++)
    {
        j = max(j,prevIndex[S[i] - 'a'] + 1);

        max_len = max(max_len,i-j+1);

        prevIndex[S[i] - 'a'] = i;
    }

    return max_len;
}