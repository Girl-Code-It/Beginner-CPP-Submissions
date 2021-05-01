class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        //algorithm :
        //1. push first vector in a hashmap
        //2. traverse second vector and check for intersecting elements
        
        unordered_map<int, int> m; // element : freq
        
        for(int i = 0; i < nums1.size(); i++)
            m[nums1[i]]++;
        
        unordered_set<int>s;
        
        for(int i = 0; i < nums2.size(); i++)
            if(m.find(nums2[i]) != m.end())
                s.insert(nums2[i]);
        vector<int>r;
        
        for(auto i : s)
            r.push_back(i);
        return r;
    }
};
