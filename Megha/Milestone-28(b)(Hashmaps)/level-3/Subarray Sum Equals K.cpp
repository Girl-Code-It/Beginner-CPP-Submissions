//https://leetcode.com/problems/subarray-sum-equals-k/submissions/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        int ans = 0,sum=0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(k == sum){
                ans++;
            }
            if(m.find(sum - k) != m.end()){
                ans += m[sum-k];
            }
            m[sum]++;
        }
        
        return ans;
    }
};
