//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> m;
        int n = A.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            m[A[i]]++;
        }
        
        for(auto i:m){
            if(i.second == n/2)
                ans = i.first;
        }
        
        return ans;
    }
};
