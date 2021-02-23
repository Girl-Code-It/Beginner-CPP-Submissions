//https://leetcode.com/problems/intersection-of-two-arrays/submissions/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> m;
        unordered_set<int> s;
        int l1 = nums1.size();
        int l2 = nums2.size();
        
        for(int i=0;i<l1;i++){
            m[nums1[i]]++;
        } 
        
        for(int i=0;i<l2;i++){
            if(m.find(nums2[i]) != m.end())
               s.insert(nums2[i]);
        } 
        
        for(auto i:s){
            v.push_back(i);
        }
    
        return v;
    }   
};
