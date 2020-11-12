
//https://leetcode.com/problems/next-greater-element-i/submissions/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int startj ;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    startj = j;
                    break;
                }
            }
        
            int ans = -1;
            for(int j=startj;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    ans = nums2[j];
                    break;
                }
            }
            v.push_back(ans);
        }
        return v;
    }
};
