class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>s;
        vector<int>ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(i < k-1)
                s.insert(nums[i]);
            else
            {
                if(i != k-1)
                    s.erase(s.find(nums[i-k]));
                s.insert(nums[i]);
                ans.push_back(*s.rbegin());
            }
        }
            return ans;
    }
};
