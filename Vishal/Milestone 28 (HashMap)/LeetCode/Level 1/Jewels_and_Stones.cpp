class Solution
{
public :
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char,int>m;

        for(int i=0; J[i]; i++)
            m[J[i]] = 1;

        int count = 0;
        for(int i=0; S[i]; i++)
        {
            if(m.find(S[i]) != m.end())
                count++;
        }

        return count;
    }
};