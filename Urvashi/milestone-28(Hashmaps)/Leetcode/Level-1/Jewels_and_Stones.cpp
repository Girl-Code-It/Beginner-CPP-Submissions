class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char, int> m;
        int count = 0;
        for (int i = 0; i < S.size(); i++)
            m[S[i]]++;
        for (int i = 0; i < J.size(); i++)
        {
            if (m[J[i]] > 0)
                count += m[J[i]];
        }
        return count;
    }
};
