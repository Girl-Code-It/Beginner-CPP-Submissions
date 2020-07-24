class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        int count[101] = {0}, n = nums.size();
        vector<int>ans(n);

        for(int i=0; i<n; i++)
            count[nums[i]]++;

        for(int i=1; i<101; i++)
            count[i] += count[i-1];

        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
                ans[i] = 0;
            else
                ans[i] = count[nums[i]-1];
        }

        return ans;
    }
};