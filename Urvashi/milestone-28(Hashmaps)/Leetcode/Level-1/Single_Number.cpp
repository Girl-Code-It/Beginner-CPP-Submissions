class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        for(int i=0;i<nums.size() ;i++)
            x = x^nums[i];
        return x;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i : nums)
            m[i]++ ;
        for(auto x : m)
        {
            if(x.second == 1)
                return x.first;
        }
        return -1;
    }
};
