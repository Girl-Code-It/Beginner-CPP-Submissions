class Solution
{
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int,int>count;
        unordered_set<int>frequency;

        int n = nums.size();

        for(int i=0,i<n; i++)
            m[nums[i]]++;

        for(auto itr : m)
        {
            if(frequency.find(itr.second) != frequency.end())
                return false;
            
            frequency.insert(itr.second);
        }
        return true;
    }
};