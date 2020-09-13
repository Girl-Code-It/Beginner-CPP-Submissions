class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
            m[nums[i]]++ ;
        for(auto x : m )
            count += (x.second)*(x.second - 1) / 2 ;
        return count; 
    }
};
