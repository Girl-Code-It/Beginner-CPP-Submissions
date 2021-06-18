class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        unordered_map<int, int> m; // element : freq
                
        for(int i = 0; i < A.size(); i++)
            m[A[i]]++;
        
        int n = A.size() / 2;
        
        for(auto i : m)
            if(i.second == n)
                return i.first;
        return -1;
            
    }
};
