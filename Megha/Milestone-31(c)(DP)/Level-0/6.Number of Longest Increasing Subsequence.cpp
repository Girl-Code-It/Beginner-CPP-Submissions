//https://leetcode.com/problems/number-of-longest-increasing-subsequence/submissions/

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int len[n];
        int count[n];
        
        int maxlen = 1;
        for(int i=0;i<n;i++){
            len[i] = 1;
            count[i] = 1;
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i]){
                    if(len[i] < len[j]+1){
                        len[i] = len[j] + 1;
                        count[i] = count[j];
                    }
                    else if(len[i] == len[j]+1){
                        len[i] = len[j] + 1;
                        count[i] += count[j];
                    }
                }
            }
            maxlen = max(maxlen, len[i]);
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            if(len[i] == maxlen)
            ans += count[i];
        }
        
        return ans;
    }
};
