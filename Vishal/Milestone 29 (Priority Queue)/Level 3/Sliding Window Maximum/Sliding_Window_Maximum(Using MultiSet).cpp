class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        multiset<int,greater<int> >m;
        vector<int>v;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            if(i >= k)
                m.erase(m.find(nums[i-k]));
            
            m.insert(nums[i]);
            
            if(i >= k-1)
                v.push_back(*m.begin());
        }
        return v;
    }
};