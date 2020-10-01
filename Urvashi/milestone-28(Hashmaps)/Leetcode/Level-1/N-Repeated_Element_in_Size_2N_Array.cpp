class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>m ;
        for(int i = 0 ; i < A.size() ; i++)
                m[A[i]]++;
        for(auto x : m)
        {
            if(x.second > 1)
                return x.first ;
        }
         return -1;   
    }
};
