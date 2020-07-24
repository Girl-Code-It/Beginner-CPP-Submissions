class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        unordered_set<int>s;
        int i = 0,j = 0,n = nums1.size(), m = nums2.size();

        while(i < n && j < m)
        {
            if(nums1[i] == nums2[j])
            {
                s.insert(nums1[i]);
                j++,i++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        
        vector<int>v;
        
        for(auto itr : s)
            v.push_back(itr);
            
        return v;
    }
};