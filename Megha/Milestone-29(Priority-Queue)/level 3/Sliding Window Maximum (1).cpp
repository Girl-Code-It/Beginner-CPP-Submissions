//https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v;
        priority_queue<pair<int,int>> q;
        
        for(int i=0;i<k;i++){
            q.push({nums[i],i});
        }
        
        v.push_back(q.top().first);
        
        for(int i=k;i<n;i++){
            q.push({nums[i],i});
            while(q.top().second <= i-k){
                q.pop();
            }
            v.push_back(q.top().first);
        }
        
        return v;
    }
};
