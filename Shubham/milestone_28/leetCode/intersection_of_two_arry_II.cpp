class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        //algorithm
        // 1. map first array in a hashmap
        // 2. traverse through the second array and check for the intersecting elements
        // 3. push intersecting elements in a vector
        
        vector<int> r;
        
        unordered_map<int, int> m;
        
        for(int i = 0; i < nums1.size(); i++)
            m[nums1[i]]++;
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m.find(nums2[i]) != m.end() and m[nums2[i]] >= 1)
            {
                r.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return r;
    }
};
