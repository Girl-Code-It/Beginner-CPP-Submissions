//https://leetcode.com/problems/4sum-ii/submissions/

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> m;
        int ans = 0;
        
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++)
                m[A[i] + B[j]]++;
        }
        
        for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                int temp = C[i] + D[j];
            if(m.find(-temp) != m.end())
                ans+=m[-temp];
            }
        }
        
        return ans;
    }
};
