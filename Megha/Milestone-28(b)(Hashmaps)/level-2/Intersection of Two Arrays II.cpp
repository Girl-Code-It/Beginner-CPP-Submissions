//https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();
        unordered_map<int,int> m;
        unordered_map<int,int> m2;
        vector<int> v;
        
        for(int i=0;i<l1;i++){
            m[nums1[i]]++;
        }
        
        for(int i=0;i<l2;i++){
            m2[nums2[i]]++;
            if(m.find(nums2[i]) != m.end() && m2[nums2[i]]<=m[nums2[i]]){
                v.push_back(nums2[i]);
            }
        }
        
        return v;
    }
};
