class Solution
{
public:
    vector<string> commonChars(vector<string> &A)
    {
        vector<int> v(26, INT_MAX);
        vector<string> ans;
        for (auto i : A)
        {
            vector<int> count(26, 0);
            for (auto j : i)
                count[j - 'a']++; // count frequency of every letter of every string of array.
            for (auto i = 0; i < 26; i++)
                v[i] = min(v[i], count[i]); // store the frequency in vector v.
        }

        for (auto i = 0; i < 26; i++)
        {
            for (auto j = 0; j < v[i]; j++)
            {
                ans.push_back(string(1, i + 'a')); // storing string.
            }
        }
        return ans;
    }
};
