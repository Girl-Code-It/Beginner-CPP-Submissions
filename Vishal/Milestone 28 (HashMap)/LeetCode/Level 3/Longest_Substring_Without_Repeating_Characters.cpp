class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        //To store last index
        vector<int>prevIndex(256,-1);

        int n = s.length(),max_len = 0;

        //Start of current window
        int j = 0;

        for(int i=0; i<n; i++)
        {
            j = max(j,prevIndex[s[i]] + 1);

            max_len = max(max_len,i-j+1);

            prevIndex[s[i]] = i;
        }

        return max_len;
    }
};