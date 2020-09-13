class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int>v;
        for(auto i : nums1)
        {
            if(m.find(i) == m.end())
                m[i] = 1;
            else
                m[i]++ ;
        }
        
        for(auto i : nums2)
        {
           if(m.find(i) != m.end())
           {
               if(m[i] > 0)
               {
                   v.push_back(i);
                   m[i]-- ;
               }
           }
        }
        return v;
    }
};
