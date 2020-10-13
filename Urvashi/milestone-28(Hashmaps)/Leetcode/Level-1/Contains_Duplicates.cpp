class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto i : nums)
            m[i]++;
        for (auto x : m)
        {
            if (x.second > 1)
                return true;
        }
        return false;
    }
};
