
//503. Next Greater Element II

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        stack<int> s;
        
        int result[1000];
        for(int i=0;i<nums.size();i++){
            result[i] = -1;
        for(int j=0;j<i;j++){
            if(nums[j]>nums[i]){
                result[i] = nums[j];
                break;
            }
        }
        for(int j=i;j<nums.size();j++){
            if(nums[j]>nums[i]){
                result[i] = nums[j];
                break;
            }
        }
            v.push_back(result[i]);
        }
        
        
        return v;
    }
};
