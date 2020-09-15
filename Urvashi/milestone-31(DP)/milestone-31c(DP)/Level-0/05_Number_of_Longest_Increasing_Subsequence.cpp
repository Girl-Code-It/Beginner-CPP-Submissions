// https://leetcode.com/problems/number-of-longest-increasing-subsequence/

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
      int n = nums.size();
      vector <int> len(n, 1), cnt(n, 1);
      int lis = 1;
      for(int i = 1; i < n; i++){
         for(int j = 0; j < i; j++){
            if(nums[i] > nums[j]){
               if(len[j] + 1 > len[i]){
                  len[i] = len[j] + 1;
                  cnt[i] = cnt[j];
               }
                // calculating count of every increasing subsequence.
               else if(len[j] + 1 == len[i])
                  cnt[i] += cnt[j];
            }
             // length of longest increasing subsequence.
            lis = max(lis, len[i]);
         }
      }
        // if length of any subsequence is equal to the longest then count it.
      int ans = 0;
      for(int i = 0; i < n; i++){
         if(len[i] == lis)
             ans += cnt[i];
      }
      return ans;
   }
};
