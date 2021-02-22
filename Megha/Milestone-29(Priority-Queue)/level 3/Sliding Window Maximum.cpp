//https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v;
        
        for(int i=0;i<=n-k;i++){
            priority_queue<int> q;
        
            q.push(nums[i]);
            for(int j=i;j<i+k;j++){
                if(nums[j] > q.top()){
                    q.pop();
                    q.push(nums[j]);
                }
            }
            v.push_back(q.top());
            q.pop();
        }
        
        return v;
    }
};
