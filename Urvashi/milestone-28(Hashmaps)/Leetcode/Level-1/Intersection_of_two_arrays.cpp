class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;

        for (auto i : nums1)
            m[i]++;
        vector<int> v;
        for (auto i : nums2)
        {
            if (m[i] >= 1)
            {
                v.push_back(i);
                m.erase(i);
            }
        }
        return v;
    }
};
