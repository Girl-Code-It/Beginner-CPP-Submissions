//https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> q;
    int currk;
    KthLargest(int k, vector<int>& nums) {
        currk = k;
        for(int i=0;i<nums.size();i++){
            add(nums[i]);
        }
        
    }
    
    int add(int val) {
        if(q.size() < currk){
            q.push(val);
        }
        else{
            if(val > q.top()){
                q.pop();
                q.push(val);
            }
        }
        
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
